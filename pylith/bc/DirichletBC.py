#!/usr/bin/env python
#
# ----------------------------------------------------------------------
#
#                           Brad T. Aagaard
#                        U.S. Geological Survey
#
# <LicenseText>
#
# ----------------------------------------------------------------------
#

## @file pylith/bc/DirichletBC.py
##
## @brief Python object for managing a Dirichlet (prescribed
## displacements) boundary condition with a set of points.
##
## Factory: boundary_condition

from BoundaryCondition import BoundaryCondition
from TimeDependent import TimeDependent
from pylith.feassemble.Constraint import Constraint
from bc import DirichletBC as ModuleDirichletBC

# DirichletBC class
class DirichletBC(BoundaryCondition, 
                  TimeDependent, 
                  Constraint, 
                  ModuleDirichletBC):
  """
  Python object for managing a DirichletBC (prescribed displacements)
  boundary condition.

  Factory: boundary_condition
  """

  # INVENTORY //////////////////////////////////////////////////////////

  import pyre.inventory

  # Override default values for TimeDependent db_initial facility
  # with ZeroDispDB.
  from ZeroDispDB import ZeroDispDB
  dbInitial = pyre.inventory.facility("db_initial", factory=ZeroDispDB,
                                      family="spatial_database")
  dbInitial.meta['tip'] = "Database of parameters for initial values."
  

  # PUBLIC METHODS /////////////////////////////////////////////////////

  def __init__(self, name="dirichletbc"):
    """
    Constructor.
    """
    BoundaryCondition.__init__(self, name)
    Constraint.__init__(self)
    self._loggingPrefix = "DiBC "
    return


  def preinitialize(self, mesh):
    """
    Do pre-initialization setup.
    """
    BoundaryCondition.preinitialize(self, mesh)
    Constraint.preinitialize(self, mesh)
    return


  def verifyConfiguration(self):
    """
    Verify compatibility of configuration.
    """
    logEvent = "%sverify" % self._loggingPrefix
    self._logger.eventBegin(logEvent)

    BoundaryCondition.verifyConfiguration(self, self.mesh)

    self._logger.eventEnd(logEvent)
    return


  def initialize(self, totalTime, numTimeSteps, normalizer):
    """
    Initialize DirichletBC boundary condition.
    """
    logEvent = "%sinit" % self._loggingPrefix
    self._logger.eventBegin(logEvent)

    self.normalizer(normalizer)
    BoundaryCondition.initialize(self, totalTime, numTimeSteps, normalizer)

    self._logger.eventEnd(logEvent)    
    return
  

  # PRIVATE METHODS ////////////////////////////////////////////////////

  def _configure(self):
    """
    Setup members using inventory.
    """
    BoundaryCondition._configure(self)
    TimeDependent._configure(self)
    return


  def _createModuleObj(self):
    """
    Create handle to corresponding C++ object.
    """
    ModuleDirichletBC.__init__(self)
    return
  

# FACTORIES ////////////////////////////////////////////////////////////

def boundary_condition():
  """
  Factory associated with DirichletBC.
  """
  return DirichletBC()

  
# End of file 
