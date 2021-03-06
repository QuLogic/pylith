// -*- C++ -*-
//
// ======================================================================
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2015 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application powerlaw3dtimedep.

#include "PowerLaw3DTimeDepData.hh"

const int pylith::materials::PowerLaw3DTimeDepData::_dimension = 3;

const int pylith::materials::PowerLaw3DTimeDepData::_numLocs = 2;

const int pylith::materials::PowerLaw3DTimeDepData::_numProperties = 6;

const int pylith::materials::PowerLaw3DTimeDepData::_numStateVars = 2;

const int pylith::materials::PowerLaw3DTimeDepData::_numDBProperties = 6;

const int pylith::materials::PowerLaw3DTimeDepData::_numDBStateVars = 12;

const int pylith::materials::PowerLaw3DTimeDepData::_numPropsQuadPt = 6;

const int pylith::materials::PowerLaw3DTimeDepData::_numVarsQuadPt = 12;

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_lengthScale =   1.00000000e+03;

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_timeScale =   1.00000000e+00;

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_pressureScale =   2.25000000e+10;

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_densityScale =   2.25000000e+04;

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_dtStableImplicit =   2.96296296e+06;

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_dtStableExplicit =   1.92450090e-01;

const int pylith::materials::PowerLaw3DTimeDepData::_numPropertyValues[] = {
1,
1,
1,
1,
1,
1,
};

const int pylith::materials::PowerLaw3DTimeDepData::_numStateVarValues[] = {
6,
6,
};

const char* pylith::materials::PowerLaw3DTimeDepData::_dbPropertyValues[] = {
"density",
"vs",
"vp",
"reference-strain-rate",
"reference-stress",
"power-law-exponent",
};

const char* pylith::materials::PowerLaw3DTimeDepData::_dbStateVarValues[] = {
"viscous-strain-xx",
"viscous-strain-yy",
"viscous-strain-zz",
"viscous-strain-xy",
"viscous-strain-yz",
"viscous-strain-xz",
"stress-xx",
"stress-yy",
"stress-zz",
"stress-xy",
"stress-yz",
"stress-xz",
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_dbProperties[] = {
  2.50000000e+03,
  3.00000000e+03,
  5.19615242e+03,
  1.00000000e-06,
  2.00000000e+12,
  1.00000000e+00,
  2.00000000e+03,
  1.20000000e+03,
  2.07846097e+03,
  1.00000000e-06,
  1.25992105e+10,
  3.00000000e+00,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_dbStateVars[] = {
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_properties[] = {
  2.50000000e+03,
  2.25000000e+10,
  2.25000000e+10,
  1.00000000e-06,
  2.00000000e+12,
  1.00000000e+00,
  2.00000000e+03,
  2.88000000e+09,
  2.88000000e+09,
  1.00000000e-06,
  1.25992105e+10,
  3.00000000e+00,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_stateVars[] = {
  4.10000000e-05,
  4.20000000e-05,
  4.30000000e-05,
  4.40000000e-05,
  4.50000000e-05,
  4.60000000e-05,
  3.10000000e+04,
  3.20000000e+04,
  3.30000000e+04,
  3.40000000e+04,
  3.50000000e+04,
  3.60000000e+04,
  1.10000000e-05,
  1.20000000e-05,
  1.30000000e-05,
  1.40000000e-05,
  1.50000000e-05,
  1.60000000e-05,
  5.10000000e+04,
  5.20000000e+04,
  5.30000000e+04,
  5.40000000e+04,
  5.50000000e+04,
  5.60000000e+04,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_propertiesNondim[] = {
  1.11111111e-01,
  1.00000000e+00,
  1.00000000e+00,
  1.00000000e-06,
  8.88888889e+01,
  1.00000000e+00,
  8.88888889e-02,
  1.28000000e-01,
  1.28000000e-01,
  1.00000000e-06,
  5.59964911e-01,
  3.00000000e+00,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_stateVarsNondim[] = {
  4.10000000e-05,
  4.20000000e-05,
  4.30000000e-05,
  4.40000000e-05,
  4.50000000e-05,
  4.60000000e-05,
  1.37777778e-06,
  1.42222222e-06,
  1.46666667e-06,
  1.51111111e-06,
  1.55555556e-06,
  1.60000000e-06,
  1.10000000e-05,
  1.20000000e-05,
  1.30000000e-05,
  1.40000000e-05,
  1.50000000e-05,
  1.60000000e-05,
  2.26666667e-06,
  2.31111111e-06,
  2.35555556e-06,
  2.40000000e-06,
  2.44444444e-06,
  2.48888889e-06,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_density[] = {
  2.50000000e+03,
  2.00000000e+03,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_strain[] = {
  1.10000000e-04,
  1.20000000e-04,
  1.30000000e-04,
  1.40000000e-04,
  1.50000000e-04,
  1.60000000e-04,
  4.10000000e-04,
  4.20000000e-04,
  4.30000000e-04,
  4.40000000e-04,
  4.50000000e-04,
  4.60000000e-04,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_stress[] = {
  7.24875767e+06,
  7.69874295e+06,
  8.14872824e+06,
  2.85250536e+06,
  3.30249065e+06,
  3.75247593e+06,
  5.09100000e+06,
  5.13808000e+06,
  5.18516000e+06,
  2.12760000e+06,
  2.18620000e+06,
  2.24480000e+06,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_elasticConsts[] = {
  6.74326518e+10,
  2.25336747e+10,
  2.25336747e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.25336747e+10,
  6.74326518e+10,
  2.25336747e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.25336743e+10,
  2.25336743e+10,
  6.74326518e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.48989770e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.48989770e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.48989770e+10,
  8.64000013e+09,
  2.88000004e+09,
  2.88000004e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.88000004e+09,
  8.64000013e+09,
  2.88000004e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  2.88000051e+09,
  2.88000051e+09,
  8.64000013e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.76000009e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.75999985e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.75999985e+09,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_initialStress[] = {
  2.10000000e+04,
  2.20000000e+04,
  2.30000000e+04,
  2.40000000e+04,
  2.50000000e+04,
  2.60000000e+04,
  5.10000000e+04,
  5.20000000e+04,
  5.30000000e+04,
  5.40000000e+04,
  5.50000000e+04,
  5.60000000e+04,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_initialStrain[] = {
  3.60000000e-05,
  3.50000000e-05,
  3.40000000e-05,
  3.30000000e-05,
  3.20000000e-05,
  3.10000000e-05,
  6.10000000e-05,
  6.20000000e-05,
  6.30000000e-05,
  6.60000000e-05,
  6.50000000e-05,
  6.40000000e-05,
};

const PylithScalar pylith::materials::PowerLaw3DTimeDepData::_stateVarsUpdated[] = {
  4.08831629e-05,
  4.19057121e-05,
  4.29282614e-05,
  4.41443253e-05,
  4.51668745e-05,
  4.61894238e-05,
  7.24875767e+06,
  7.69874295e+06,
  8.14872824e+06,
  2.85250536e+06,
  3.30249065e+06,
  3.75247593e+06,
  1.10000000e-05,
  1.20000000e-05,
  1.30000000e-05,
  1.40000004e-05,
  1.50000004e-05,
  1.60000004e-05,
  5.09100000e+06,
  5.13808000e+06,
  5.18516000e+06,
  2.12760000e+06,
  2.18620000e+06,
  2.24480000e+06,
};

pylith::materials::PowerLaw3DTimeDepData::PowerLaw3DTimeDepData(void)
{ // constructor
  dimension = _dimension;
  numLocs = _numLocs;
  numProperties = _numProperties;
  numStateVars = _numStateVars;
  numDBProperties = _numDBProperties;
  numDBStateVars = _numDBStateVars;
  numPropsQuadPt = _numPropsQuadPt;
  numVarsQuadPt = _numVarsQuadPt;
  lengthScale = _lengthScale;
  timeScale = _timeScale;
  pressureScale = _pressureScale;
  densityScale = _densityScale;
  dtStableImplicit = _dtStableImplicit;
  dtStableExplicit = _dtStableExplicit;
  numPropertyValues = const_cast<int*>(_numPropertyValues);
  numStateVarValues = const_cast<int*>(_numStateVarValues);
  dbPropertyValues = const_cast<char**>(_dbPropertyValues);
  dbStateVarValues = const_cast<char**>(_dbStateVarValues);
  dbProperties = const_cast<PylithScalar*>(_dbProperties);
  dbStateVars = const_cast<PylithScalar*>(_dbStateVars);
  properties = const_cast<PylithScalar*>(_properties);
  stateVars = const_cast<PylithScalar*>(_stateVars);
  propertiesNondim = const_cast<PylithScalar*>(_propertiesNondim);
  stateVarsNondim = const_cast<PylithScalar*>(_stateVarsNondim);
  density = const_cast<PylithScalar*>(_density);
  strain = const_cast<PylithScalar*>(_strain);
  stress = const_cast<PylithScalar*>(_stress);
  elasticConsts = const_cast<PylithScalar*>(_elasticConsts);
  initialStress = const_cast<PylithScalar*>(_initialStress);
  initialStrain = const_cast<PylithScalar*>(_initialStrain);
  stateVarsUpdated = const_cast<PylithScalar*>(_stateVarsUpdated);
} // constructor

pylith::materials::PowerLaw3DTimeDepData::~PowerLaw3DTimeDepData(void)
{}


// End of file
