// -*- C++ -*-
//
// ======================================================================
//
//                           Brad T. Aagaard
//                        U.S. Geological Survey
//
// {LicenseText}
//
// ======================================================================
//

#include <portinfo>

#include "pylith/feassemble/Quadrature.hh" // USES Quadrature

// ----------------------------------------------------------------------
// Constructor
template<typename mesh_type, typename field_type>
pylith::meshio::CellFilter<mesh_type, field_type>::CellFilter(void) :
  _quadrature(0)
{ // constructor
} // constructor

// ----------------------------------------------------------------------
// Destructor
template<typename mesh_type, typename field_type>
pylith::meshio::CellFilter<mesh_type, field_type>::~CellFilter(void)
{ // destructor
  delete _quadrature; _quadrature = 0;
} // destructor  

// ----------------------------------------------------------------------
// Copy constructor.
template<typename mesh_type, typename field_type>
pylith::meshio::CellFilter<mesh_type, field_type>::CellFilter(const CellFilter& f) :
  _quadrature(0)
{ // copy constructor
  if (0 != f._quadrature)
    _quadrature = new feassemble::Quadrature<mesh_type>(*f._quadrature);
} // copy constructor

// ----------------------------------------------------------------------
// Set quadrature associated with cells.
template<typename mesh_type, typename field_type>
void
pylith::meshio::CellFilter<mesh_type, field_type>::quadrature(const feassemble::Quadrature<mesh_type>* q)
{ // quadrature
  delete _quadrature; 
  _quadrature = (0 != q) ? new feassemble::Quadrature<mesh_type>(*q) : 0;
} // quadrature


// End of file
