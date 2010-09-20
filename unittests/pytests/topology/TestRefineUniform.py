#!/usr/bin/env python
#
# ======================================================================
#
# Brad T. Aagaard, U.S. Geological Survey
# Charles A. Williams, GNS Science
# Matthew G. Knepley, University of Chicago
#
# This code was developed as part of the Computational Infrastructure
# for Geodynamics (http://geodynamics.org).
#
# Copyright (c) 2010 University of California, Davis
#
# See COPYING for license information.
#
# ======================================================================
#

## @file unittests/pytests/topology/TestRefineUniform.py

## @brief Unit testing of Python RefineUniform object.

import unittest

from pylith.topology.RefineUniform import RefineUniform

from pylith.topology.RefineUniform import RefineUniform

# ----------------------------------------------------------------------
class TestRefineUniform(unittest.TestCase):
  """
  Unit testing of Python RefineUniform object.
  """

  def test_constructor(self):
    """
    Test constructor.
    """
    io = RefineUniform()
    return


  def test_refineTet4NoFault(self):
    """
    Test refine().
    """
    filenameIn = "data/twotet4.mesh"
    filenameOut = "data/twotet4_test.mesh"
    filenameOutE = "data/twotet4_nofault_refined2.mesh"

    self._runTest(filenameIn, filenameOut, filenameOutE)
    return


  def test_factory(self):
    """
    Test factory method.
    """
    from pylith.topology.RefineUniform import mesh_refiner
    refiner = mesh_refiner()
    return


  def _runTest(self, filenameIn, filenameOut, filenameOutE):

    from spatialdata.geocoords.CSCart import CSCart
    cs = CSCart()
    cs._configure()

    from pylith.meshio.MeshIOAscii import MeshIOAscii
    io = MeshIOAscii()
    io.inventory.filename = filenameIn
    io.inventory.coordsys = cs
    io._configure()
    
    from spatialdata.units.Nondimensional import Nondimensional
    normalizer = Nondimensional()

    mesh = io.read(debug=True, interpolate=False)

    from pylith.topology.RefineUniform import RefineUniform
    refiner = RefineUniform()
    meshRefined = refiner.refine(mesh)

    meshRefined.view("MESH")
    
    io.filename(filenameOut)
    io.write(meshRefined)

    fileE = open(filenameOutE, "r")
    linesE = fileE.readlines()
    fileE.close()
    fileT = open(filenameOut, "r")
    linesT = fileT.readlines()
    fileT.close()

    self.assertEqual(len(linesE), len(linesT))
    for (lineE, lineT) in zip(linesE, linesT):
      self.assertEqual(lineE, lineT)
    
    return



# End of file 