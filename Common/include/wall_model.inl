/*!
 * \file wall_model.inl
 * \brief In-Line subroutines of the <i>wall_model.hpp</i> file.
 * \author E. van der Weide, T. Economon, P. Urbanczyk
 * \version 6.2.0 "Falcon"
 *
 * The current SU2 release has been coordinated by the
 * SU2 International Developers Society <www.su2devsociety.org>
 * with selected contributions from the open-source community.
 *
 * The main research teams contributing to the current release are:
 *  - Prof. Juan J. Alonso's group at Stanford University.
 *  - Prof. Piero Colonna's group at Delft University of Technology.
 *  - Prof. Nicolas R. Gauger's group at Kaiserslautern University of Technology.
 *  - Prof. Alberto Guardone's group at Polytechnic University of Milan.
 *  - Prof. Rafael Palacios' group at Imperial College London.
 *  - Prof. Vincent Terrapon's group at the University of Liege.
 *  - Prof. Edwin van der Weide's group at the University of Twente.
 *  - Lab. of New Concepts in Aeronautics at Tech. Institute of Aeronautics.
 *
 * Copyright 2012-2019, Francisco D. Palacios, Thomas D. Economon,
 *                      Tim Albring, and the SU2 contributors.
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

inline CWallModel::CWallModel(void){
  h_wm = 0.0;
}

inline CWallModel::~CWallModel(void){}

inline void CWallModel::Initialize(const unsigned short *intInfo,
                                   const su2double      *doubleInfo) {}

inline void CWallModel::WallShearStressAndHeatFlux(const su2double rhoExchange,
                                                   const su2double velExchange,
                                                   const su2double muExchange,
                                                   const su2double pExchange,
                                                   const su2double Wall_HeatFlux,
                                                   const bool      HeatFlux_Prescribed,
                                                   const su2double Wall_Temperature,
                                                   const bool      Temperature_Prescribed,
                                                         su2double &tauWall,
                                                         su2double &qWall,
                                                         su2double &ViscosityWall,
                                                         su2double &kOverCvWall) {}

inline CWallModel1DEQ::CWallModel1DEQ(void) : CWallModel(){
  expansionRatio = 0.0;
  numPoints      = 0;
}

inline CWallModel1DEQ::~CWallModel1DEQ(void){}

inline CWallModelLogLaw::CWallModelLogLaw(void) : CWallModel(){
  expansionRatio = 0.0;
  numPoints      = 0;
}

inline CWallModelLogLaw::~CWallModelLogLaw(void){}

