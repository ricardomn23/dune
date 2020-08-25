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
#include <csignal>


namespace Control
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author ricardo
  namespace AUV
  {
    namespace GoToDepth
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
		  float msgFrequency;
          float depth;
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
        Behaviour* b;
        Controller* c;
        Arguments m_args;
        bool hasReachedPoint;
        
        
        //! Constructor.
        //! @param[in] name task name.
        //! @param[in] ctx context.
        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx)
        {
			
		  param("msgFrequency", m_args.msgFrequency)
          .defaultValue("100")
          .description("msgFrequency");
		 
          //Behaviour
          
           param("depth", m_args.depth)
          .defaultValue("-10.0")
          .description("Valor da profundidade");
          
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
          
          b = new Behaviour();
          c = new Controller();
        
          bind<IMC::SimulatedState>(this);
        }

        //! Update internal state with new parameter values.
        void
        onUpdateParameters(void)
        {
          b->setT(m_args.T);
          b->setGoToK_heading(m_args.goTo_K_heading);
          b->setGoToK_pitch(m_args.goTo_K_pitch);
          b->setReachRadius(m_args.reachRadius);
          b->setGoToK_roll(m_args.goTo_K_roll);
          b->setGoToK_speed(m_args.goTo_K_speed);
          b->setCruiseSpeed(m_args.cruiseSpeed);
          b->setReachSpeed(m_args.reachSpeed);
          b->setGoToKi_heading(m_args.goTo_Ki_heading);
          b->setGoToKd_heading(m_args.goTo_Kd_heading);
          b->setGoToKi_pitch(m_args.goTo_Ki_pitch);
          b->setGoToKd_pitch(m_args.goTo_Kd_pitch);
          b->setGoToKd_speed(m_args.goTo_Kd_speed);
          b->setGoToKi_speed(m_args.goTo_Ki_speed);
          
          c->setTailMaxAmp(m_args.maxTailAmp);
          c->setTailMaxDeviation(m_args.maxTailDev);
          c->setTailMaxFreq(m_args.maxTailFreq);
          c->setTailCruiseAmp(m_args.cruiseTailAmp);
          c->setSideMaxAmp(m_args.maxSideAmp);
          c->setSideMaxDeviation(m_args.maxSideDev);
          c->setSideMaxFreq(m_args.maxSideFreq);
          c->setCruiseSideAmp(m_args.cruiseSideAmp);
          c->setCruiseSideFreq(m_args.cruiseSideFreq);
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
          //Memory::clear(b);
          //Memory::clear(c);
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
          
          Behaviour::Actuation act = b->goToDepth(m_args.depth, state, dstate);
          Controller::MotorCommand mCommand = c->control(act);
          m_motorCommand.tail_frequency = mCommand(0,0);
          m_motorCommand.tail_deflection = mCommand(1,0);
          m_motorCommand.tail_amplitude = mCommand(2,0);
          m_motorCommand.left_fin_frequency = mCommand(0,1);
          m_motorCommand.left_fin_deflection = mCommand(1,1);
          m_motorCommand.left_fin_amplitude = mCommand(2,1);
          m_motorCommand.right_fin_frequency = mCommand(0,2);
          m_motorCommand.right_fin_deflection = mCommand(1,2);
          m_motorCommand.right_fin_amplitude = mCommand(2,2);
          
          if( b->hasReachedPoint(state) ){
            
            if(!hasReachedPoint){
              
              std::cout <<"BUV has Reached Depth!"<< std::endl;
              
              raise( SIGINT);
            }
            hasReachedPoint = true;
            return;
          }
          
          dispatch(m_motorCommand);
        }


        //! Main loop.
        void
        onMain(void)
        {
          //while (!stopping() && !hasReachedPoint)
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
