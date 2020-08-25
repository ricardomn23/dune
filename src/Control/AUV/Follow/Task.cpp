//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Maia Nunes                                               *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "../BUVControlLib/include/BUVControl/BUVControl.hpp"
#include <vector>
#include <functional>
#include <csignal>

namespace Control
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author ricardo
  namespace AUV
  {
    namespace Follow
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {	  
		  float msgFrequency;
          std::string xTargetFunction;
          std::string yTargetFunction;
          std::string zTargetFunction;
          float xA;
          float xB;
          float xC;
          float xw;
          float xConst;
          float yA;
          float yB;
          float yC;
          float yw;
          float yConst;
          float zA;
          float zB;
          float zC;
          float zw;
          float zConst;
          
          
          
          float T;
          float duration;
          float goTo_K_roll;
          float goTo_K_pitch;
          float goTo_Ki_pitch;
          float goTo_Kd_pitch;
          float goTo_K_heading;
          float goTo_Ki_heading;
          float goTo_Kd_heading;
          float goTo_K_speed;
          float goTo_Ki_speed;
          float goTo_Kd_speed;
          float cruiseSpeed;
          float reachRadius;
          float reachSpeed;
          
          float maxTailAmp;
          float maxTailDev;
          float maxTailFreq;
          float cruiseTailAmp;
          float maxSideAmp;
          float maxSideDev;
          float maxSideFreq;
          float cruiseSideAmp;
          float cruiseSideFreq;
          float targetV;
      };


      struct Task: public DUNE::Tasks::Task
      {
        IMC::BUVMotorCommand m_motorCommand;
        Behaviour* behaviour;
        Controller* controller;
        Arguments m_args;
        float currentTime;
        float T;
        bool hasFinished;
        float duration;
        std::function<float(float)> xTargetFunction;
        std::function<float(float)> yTargetFunction;
        std::function<float(float)> zTargetFunction;
        std::function<float(float)> xDTargetFunction;
        std::function<float(float)> yDTargetFunction;
        std::function<float(float)> zDTargetFunction;
        std::ofstream targetlogfile;
        
        
        
        
        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx)
        {
          param("msgFrequency", m_args.msgFrequency)
          .defaultValue("100")
          .description("msgFrequency");
		
          param("xTargetFunction", m_args.xTargetFunction)
          .defaultValue("constant")
          .description("função do follow");

          param("yTargetFunction", m_args.yTargetFunction)
          .defaultValue("constant")
          .description("função do follow");
          
          param("zTargetFunction", m_args.zTargetFunction)
          .defaultValue("constant")
          .description("função do follow");
          
          param("xA", m_args.xA)
          .defaultValue("1.0")
          .description("valor de xA");
          
          param("yA", m_args.yA)
          .defaultValue("1.0")
          .description("valor de yA");
          
          param("zA", m_args.zA)
          .defaultValue("1.0")
          .description("valor de zA");
          
          param("xB", m_args.xB)
          .defaultValue("1.0")
          .description("valor de xB");
          
          param("yB", m_args.yB)
          .defaultValue("1.0")
          .description("valor de yB");
          
          param("zB", m_args.zB)
          .defaultValue("1.0")
          .description("valor de zB");
          
          param("xC", m_args.xC)
          .defaultValue("1.0")
          .description("valor de xC");
          
          param("yC", m_args.yC)
          .defaultValue("1.0")
          .description("valor de yC");
          
          param("zC", m_args.zC)
          .defaultValue("1.0")
          .description("valor de zC");
          
          param("xw", m_args.xw)
          .defaultValue("1.0")
          .description("valor de xw");
          
          param("yw", m_args.yw)
          .defaultValue("1.0")
          .description("valor de yw");
          
          param("zw", m_args.zw)
          .defaultValue("1.0")
          .description("valor de zw");
          
          param("xConst", m_args.xConst)
          .defaultValue("1.0")
          .description("valor de xConst");
          
          param("yConst", m_args.yConst)
          .defaultValue("1.0")
          .description("valor de yConst");
          
          param("zConst", m_args.zConst)
          .defaultValue("1.0")
          .description("valor de zConst");
          
          //Behaviour
          
          param("T", m_args.T)
          .defaultValue("0.05")
          .description("Valor da duração de cada simulação");

          param("duration", m_args.duration)
          .defaultValue("400.0")
          .description("Valor da duração da simulação");
          
          param("goTo_K_roll", m_args.goTo_K_roll)
          .defaultValue("1.0")
          .description("Valor de K para o roll");
          
          param("goTo_K_pitch", m_args.goTo_K_pitch)
          .defaultValue("0.9")
          .description("Valor de K para o pitch");
          
          param("goTo_Ki_pitch", m_args.goTo_Ki_pitch)
          .defaultValue("0.0")
          .description("Valor de Ki para o pitch");
          
          param("goTo_Kd_pitch", m_args.goTo_Kd_pitch)
          .defaultValue("10.0")
          .description("Valor de Kd para o pitch");
          
          param("goTo_K_heading", m_args.goTo_K_heading)
          .defaultValue("0.8")
          .description("Valor de K para o heading");
          
          param("goTo_Ki_heading", m_args.goTo_Ki_heading)
          .defaultValue("0.0")
          .description("Valor de Ki para o heading");
          
          param("goTo_Kd_heading", m_args.goTo_Kd_heading)
          .defaultValue("6.0")
          .description("Valor de Kd para o heading");
          
          param("goTo_K_speed", m_args.goTo_K_speed)
          .defaultValue("0.8")
          .description("Valor de K para a velocidade");
          
          param("goTo_Ki_speed", m_args.goTo_Ki_speed)
          .defaultValue("0.25")
          .description("Valor de Ki para a velocidade");
          
          param("goTo_Kd_speed", m_args.goTo_Kd_speed)
          .defaultValue("0.7")
          .description("Valor de Kd para a velocidade");
          
          param("cruiseSpeed", m_args.cruiseSpeed)
          .defaultValue("1.0")
          .description("Valor da velocidade de cruzeiro");
          
          //Controller
          param("maxTailAmp", m_args.maxTailAmp)
          .defaultValue("90.0")
          .description("Valor de amplitude maxima da cauda principal");
          
          param("maxTailDev", m_args.maxTailDev)
          .defaultValue("90.0")
          .description("Valor de deflexão maxima da cauda principal");
          
          param("maxTailFreq", m_args.maxTailFreq)
          .defaultValue("3.5")
          .description("Valor de frequencia maxima da cauda principal");
          
          param("cruiseTailAmp", m_args.cruiseTailAmp)
          .defaultValue("90.0")
          .description("Valor de amplitude de cruzeiro da cauda principal");
          
          param("maxSideAmp", m_args.maxSideAmp)
          .defaultValue("45.0")
          .description("Valor de amplitude máxima das barbatanas laterais");
          
          param("maxSideDev", m_args.maxSideDev)
          .defaultValue("60.0")
          .description("Valor de deflexão máxima das barbatanas laterais");
          
          param("maxSideFreq", m_args.maxSideFreq)
          .defaultValue("3.5")
          .description("Valor de deflexão máxima das barbatanas laterais");
          
          param("cruiseSideAmp", m_args.cruiseSideAmp)
          .defaultValue("20.0")
          .description("Valor de amplitude de cruzeiro das barbatanas laterais");
          
          param("cruiseSideFreq", m_args.cruiseSideFreq)
          .defaultValue("1.0")
          .description("Valor de amplitude de cruzeiro das barbatanas laterais");
          
          param("reachRadius", m_args.reachRadius)
          .defaultValue("2.0")
          .description("Valor de distancia ao objetivo em que para a simulação");
          
          param("reachSpeed", m_args.reachSpeed)
          .defaultValue("1.0")
          .description("Valor de velocidade de chegada ao objetivo");
          
          behaviour = new Behaviour();
          controller = new Controller();
          currentTime = 0.0;
          hasFinished = false;
          
          
          bind<IMC::SimulatedState>(this);
        }

        std::string getFunctionName (std::string const& axis){
            
            if (axis == "x") {
                return m_args.xTargetFunction;
            }
            else if (axis == "y") {
                return m_args.yTargetFunction;
            }
            else {
                return m_args.zTargetFunction;
            }
            
        }
        
        float getA (std::string const& axis){
            
            if (axis == "x")
                return m_args.xA;
            
            else if (axis == "y")
                return m_args.yA;
            
            else
                return m_args.zA;
            
        }
        
        float getB (std::string const& axis){
            
            if (axis == "x")
                return m_args.xB;
            
            else if (axis == "y")
                return m_args.yB;
            
            else
                return m_args.zB;
            
        }
        
        float getC (std::string const& axis){
            
            if (axis == "x")
                return m_args.xC;
            
            else if (axis == "y") 
                return m_args.yC;
            
            else
                return m_args.zC;
            
        }
        
        float getw (std::string const& axis){
            
            if (axis == "x")
                return m_args.xw;
            
            else if (axis == "y")
                return m_args.yw;
            
            else
                return m_args.zw;
            
        }
        
        float getConst (std::string const& axis){
            
            if (axis == "x")
                return m_args.xConst;
            
            else if (axis == "y")
                return m_args.yConst;
            
            else
                return m_args.zConst;
            
        }

        std::tuple<std::function<float(float)>, std::function<float(float)>> createFunction(std::string const& axis) {
            std::string functionName = getFunctionName(axis);
            if (functionName == "constant") {
                float c = getConst (axis);
                std::function<float(float)> f = [c](float t) { return c; };
                std::function<float(float)> df = [](float t) { return 0.0; };
                return std::make_tuple (f, df);
            } else if (functionName == "proportional") {
                float a = getA (axis);
                float c = getC (axis);
                std::function<float(float)> f = [a,c](float t) { return a * t + c; };
                std::function<float(float)> df = [a](float t) { return a; };
                return std::make_tuple (f, df);
            } else if (functionName == "sin") {
                float b = getB (axis);
                float w = getw (axis);
                float c = getC (axis);
                std::function<float(float)> f = [b,w,c](float t) { return b * sin(w * t) + c; };
                std::function<float(float)> df = [b, w](float t) { return b*w*cos(w*t); };
                return std::make_tuple (f, df);
            } else if (functionName == "cos") {
                float b = getB (axis);
                float w = getw (axis);
                float c = getC (axis);
                std::function<float(float)> f = [b,w,c](float t) { return b * cos(w * t) + c; };
                std::function<float(float)> df = [b, w](float t) { return -b*w*sin(w*t); };
                return std::make_tuple (f, df);
            } else { //default -> constant with defaultValue
                float c = getConst (axis);
                std::function<float(float)> f = [c](float t) { return c; };
                std::function<float(float)> df = [](float t) { return 0.0; };
                return std::make_tuple (f, df);
            }
    
        }
        
        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          T = m_args.T;
          duration = m_args.duration;
          behaviour->setT(m_args.T);
          behaviour->setGoToK_heading(m_args.goTo_K_heading);
          behaviour->setGoToK_pitch(m_args.goTo_K_pitch);
          behaviour->setReachRadius(m_args.reachRadius);
          behaviour->setGoToK_roll(m_args.goTo_K_roll);
          behaviour->setGoToK_speed(m_args.goTo_K_speed);
          behaviour->setCruiseSpeed(m_args.cruiseSpeed);
          behaviour->setReachSpeed(m_args.reachSpeed);
          behaviour->setGoToKi_heading(m_args.goTo_Ki_heading);
          behaviour->setGoToKd_heading(m_args.goTo_Kd_heading);
          behaviour->setGoToKi_pitch(m_args.goTo_Ki_pitch);
          behaviour->setGoToKd_pitch(m_args.goTo_Kd_pitch);
          behaviour->setGoToKd_speed(m_args.goTo_Kd_speed);
          behaviour->setGoToKi_speed(m_args.goTo_Ki_speed);
          
          controller->setTailMaxAmp(m_args.maxTailAmp);
          controller->setTailMaxDeviation(m_args.maxTailDev);
          controller->setTailMaxFreq(m_args.maxTailFreq);
          controller->setTailCruiseAmp(m_args.cruiseTailAmp);
          controller->setSideMaxAmp(m_args.maxSideAmp);
          controller->setSideMaxDeviation(m_args.maxSideDev);
          controller->setSideMaxFreq(m_args.maxSideFreq);
          controller->setCruiseSideAmp(m_args.cruiseSideAmp);
          controller->setCruiseSideFreq(m_args.cruiseSideFreq);
            
          std::tuple<std::function<float(float)>, std::function<float(float)>> xFunctions = createFunction("x");
          xTargetFunction = std::get<0>(xFunctions);
          xDTargetFunction = std::get<1>(xFunctions);
          std::tuple<std::function<float(float)>, std::function<float(float)>> yFunctions = createFunction("y");
          yTargetFunction = std::get<0>(yFunctions);
          yDTargetFunction = std::get<1>(yFunctions);
          std::tuple<std::function<float(float)>, std::function<float(float)>> zFunctions = createFunction("z");
          zTargetFunction = std::get<0>(zFunctions);
          zDTargetFunction = std::get<1>(zFunctions);
		  
	
			std::string savefile = "target.log";
			targetlogfile.open(savefile);
			if( !targetlogfile.is_open() )
			{
				std::cout << " could not open \"" << savefile << "\" for logging!" << std::endl;
		
			}
        }

        //! Reserve entity identifiers.
        void
        onEntityReservation(void)
        {
        }

        //! Resolve entity names.
        void
        onEntityResolution(void)
        {
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
        }

        //! Release resources.
        void
        onResourceRelease(void)
        {
          //Memory::clear(behaviour);
          //Memory::clear(controller);
        }

        void
        consume(const IMC::SimulatedState* msg)
        {
          BUV1_Sim::State state;
          state(0)= msg->x;
          state(1)= msg->y;
          state(2)= msg->z;
          state(3)= msg->phi;
          state(4)= msg->theta;
          state(5)= msg->psi;
          
          BUV1_Sim::DState dstate;
          dstate(0)= msg->u;
          dstate(1)= msg->v;
          dstate(2)= msg->w;
          dstate(3)= msg->p;
          dstate(4)= msg->q;
          dstate(5)= msg->r;
          
          Behaviour::Goal target;
         
          target (0) = xTargetFunction(currentTime);
          target (1) = yTargetFunction(currentTime);
          target (2) = zTargetFunction(currentTime);

          float vx = xDTargetFunction (currentTime);
          float vy = yDTargetFunction (currentTime);
          float vz = zDTargetFunction (currentTime);
          float targetV = sqrt(SQR(vx)+SQR(vy)+SQR(vz));
          
          Behaviour::Actuation act = behaviour->follow(target, state, dstate, targetV);
          Controller::MotorCommand mCommand = controller->control(act);
          m_motorCommand.tail_frequency = mCommand(0,0);
          m_motorCommand.tail_deflection = mCommand(1,0);
          m_motorCommand.tail_amplitude = mCommand(2,0);
          m_motorCommand.left_fin_frequency = mCommand(0,1);
          m_motorCommand.left_fin_deflection = mCommand(1,1);
          m_motorCommand.left_fin_amplitude = mCommand(2,1);
          m_motorCommand.right_fin_frequency = mCommand(0,2);
          m_motorCommand.right_fin_deflection = mCommand(1,2);
          m_motorCommand.right_fin_amplitude = mCommand(2,2);
          
          if(currentTime >= duration){
            
            if(!hasFinished){
              
              std::cout <<"Duration Time Out!"<< std::endl;
              
              raise( SIGINT);
            }
            
            hasFinished = true;
            return;
          }
            
            
          currentTime += T; 
          
          
          targetlogfile << target.transpose() << std::endl;
		  
          dispatch(m_motorCommand);
        }


        //! Main loop.
        void
        onMain(void)
        {
          while (!stopping())
          {
            waitForMessages(1.0/m_args.msgFrequency);
          }
        }
      };
    }
  }
}

DUNE_TASK
