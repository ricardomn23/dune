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

// ISO C++ 98 headers.
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stdexcept>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "BUVSimLib/include/BUVSim/BUVSim.hpp"

using DUNE_NAMESPACES;

namespace Simulators
{
  //! Vehicle SIMulator for DUNE.
  //! %VSIM is responsible for multiple vehicle simulation.
  //! In the present, it is able to simulate
  //! Unmanned Underwater Vehicles
  //! and Autonomous Surface Vehicles.
  //!
  //! @author Bruno Terra
  //! @author José Braga
  namespace BUV_Sim
  {
    //! %Task arguments.
    struct Arguments
    {
      float T;
    };

    //! Simulator task.
    struct Task: public Tasks::Periodic
    {
      
      //! Simulation world.
      BUV1_Sim* buv;
      //! Simulated position (X,Y,Z).
      IMC::SimulatedState m_sstate;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx)
      {
        param("T", m_args.T)
        .defaultValue("0.05")
        .description("T - Simulation period");
      
        // Register handler routines.
        bind<IMC::BUVMotorCommand>(this);
        
      }

      void
      onUpdateParameters(void)
      {
        buv = new BUV1_Sim(m_args.T,"BUV1_Sim.log");
		
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        //Memory::clear(buv);
        
      }

      //! Initialize resources and add vehicle to the world.
      void
      onResourceInitialization(void)
      {
      }


      void
      consume(const IMC::BUVMotorCommand* msg)
      {
        Eigen::Matrix<float,3,3> motorCom;
        motorCom.col(0) << msg->tail_frequency, msg->tail_deflection, msg->tail_amplitude;
        motorCom.col(1) << msg->left_fin_frequency, msg->left_fin_deflection, msg->left_fin_amplitude;
        motorCom.col(2) << msg->right_fin_frequency, msg->right_fin_deflection, msg->right_fin_amplitude;
        buv->setMotorCommands(motorCom);
        buv->update();
      } 

      void
      task(void)
      {
    
        BUV1_Sim::State state = buv->getState();

        m_sstate.x = state(0);
        m_sstate.y = state(1);
        m_sstate.z = state(2);

        m_sstate.phi = state(3);
        m_sstate.theta = state(4);
        m_sstate.psi = state(5);

        BUV1_Sim::DState dstate = buv->getDState();
    
        m_sstate.p = dstate(3);
        m_sstate.q = dstate(4);
        m_sstate.r = dstate(5);

        m_sstate.u = dstate(0);
        m_sstate.v = dstate(1);
        m_sstate.w = dstate(2);

        BUV1_Sim::SeaCurr seaCurr = buv->getSeaCurr();
    
        m_sstate.svx = seaCurr(0);
        m_sstate.svy = seaCurr(1);
        m_sstate.svz = seaCurr(2);

        dispatch(m_sstate);
      }
    };
  }
}

DUNE_TASK
