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

#include "DataWriterVTKDataSubMeshTri3.hh"

#include <assert.h> // USES assert()

const char* pylith::meshio::DataWriterVTKDataSubMeshTri3::_meshFilename = 
  "data/tri3.mesh";

const char* pylith::meshio::DataWriterVTKDataSubMeshTri3::_bcLabel = 
  "bc";

const char* pylith::meshio::DataWriterVTKDataSubMeshTri3::_faultLabel = 
  "fault";
const int pylith::meshio::DataWriterVTKDataSubMeshTri3::_faultId = 100;

const char* pylith::meshio::DataWriterVTKDataSubMeshTri3::_timestepFilename = 
  "tri3_surf.vtk";

const char* pylith::meshio::DataWriterVTKDataSubMeshTri3::_vertexFilename = 
  "tri3_surf_vertex.vtk";

const char* pylith::meshio::DataWriterVTKDataSubMeshTri3::_cellFilename = 
  "tri3_surf_cell.vtk";

const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_time = 1.0;

const char* pylith::meshio::DataWriterVTKDataSubMeshTri3::_timeFormat = 
  "%3.1f";

const int pylith::meshio::DataWriterVTKDataSubMeshTri3::_numVertices = 6;

const pylith::meshio::DataWriterData::FieldStruct
pylith::meshio::DataWriterVTKDataSubMeshTri3::_vertexFields[] = {
  { "pressure", topology::FieldBase::SCALAR, 1 },
  { "displacement", topology::FieldBase::VECTOR, 2 },
  { "stress", topology::FieldBase::TENSOR, 3 },
  { "other", topology::FieldBase::OTHER, 2 },
};
const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_vertexFieldScalar[6*1] = {
  2.1, 3.2, 4.3, 5.4, 6.5, 7.6,
};
const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_vertexFieldVector[6*2] = {
  1.1, 2.2,
  3.3, 4.4,
  5.5, 6.6,
  7.7, 8.8,
  9.9, 10.0,
  11.1, 12.2,
};
const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_vertexFieldTensor[6*3] = {
  1.1, 1.2, 1.3,
  2.1, 2.2, 2.3,
  3.1, 3.2, 3.3,
  4.1, 4.2, 4.3,
  5.1, 5.2, 5.3,
  6.1, 6.2, 6.3,
};
const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_vertexFieldOther[6*2] = {
  1.2, 2.3,
  3.4, 4.5,
  5.6, 6.7,
  7.8, 8.9,
  9.0, 10.1,
  11.2, 12.3,
};

const int pylith::meshio::DataWriterVTKDataSubMeshTri3::_numCells = 1;

const pylith::meshio::DataWriterData::FieldStruct
pylith::meshio::DataWriterVTKDataSubMeshTri3::_cellFields[4] = {
  { "pressure", topology::FieldBase::SCALAR, 1 },
  { "traction", topology::FieldBase::VECTOR, 2 },
  { "stress", topology::FieldBase::TENSOR, 3 },
  { "other", topology::FieldBase::OTHER, 2 },
};
const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_cellFieldScalar[1*1] = {
  2.1,
};
const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_cellFieldVector[1*2] = {
  1.1, 2.2,
};
const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_cellFieldTensor[1*3] = {
  1.2, 2.3, 3.4,
};
const PylithScalar pylith::meshio::DataWriterVTKDataSubMeshTri3::_cellFieldOther[1*2] = {
  1.2, 2.3,
};

pylith::meshio::DataWriterVTKDataSubMeshTri3::DataWriterVTKDataSubMeshTri3(void)
{ // constructor
  meshFilename = const_cast<char*>(_meshFilename);
  bcLabel = const_cast<char*>(_bcLabel);
  faultLabel = const_cast<char*>(_faultLabel);
  faultId = _faultId;

  timestepFilename = const_cast<char*>(_timestepFilename);
  vertexFilename = const_cast<char*>(_vertexFilename);
  cellFilename = const_cast<char*>(_cellFilename);

  time = _time;
  timeFormat = const_cast<char*>(_timeFormat);
  
  numVertices = _numVertices;
  assert(DataWriterData::numVertexFields == numVertexFields);
  vertexFieldsInfo = const_cast<DataWriterData::FieldStruct*>(_vertexFields);
  vertexFields[0] = const_cast<PylithScalar*>(_vertexFieldScalar);
  vertexFields[1] = const_cast<PylithScalar*>(_vertexFieldVector);
  vertexFields[2] = const_cast<PylithScalar*>(_vertexFieldTensor);
  vertexFields[3] = const_cast<PylithScalar*>(_vertexFieldOther);

  numCells = _numCells;
  assert(DataWriterData::numCellFields == numCellFields);
  cellFieldsInfo = const_cast<DataWriterData::FieldStruct*>(_cellFields);
  cellFields[0] = const_cast<PylithScalar*>(_cellFieldScalar);
  cellFields[1] = const_cast<PylithScalar*>(_cellFieldVector);
  cellFields[2] = const_cast<PylithScalar*>(_cellFieldTensor);
  cellFields[3] = const_cast<PylithScalar*>(_cellFieldOther);
} // constructor

pylith::meshio::DataWriterVTKDataSubMeshTri3::~DataWriterVTKDataSubMeshTri3(void)
{}


// End of file
