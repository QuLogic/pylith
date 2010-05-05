#!/usr/bin/env nemesis
#
# ======================================================================
#
#                           Brad T. Aagaard
#                        U.S. Geological Survey
#
# {LicenseText}
#
# ======================================================================
#

__requires__ = "PyLith"

import unittest

def suite():
  """
  Create test suite.
  """
  suite = unittest.TestSuite()

  from TestExtensionDisp import TestExtensionDisp
  suite.addTest(unittest.makeSuite(TestExtensionDisp))

  from TestExtensionForce import TestExtensionForce
  suite.addTest(unittest.makeSuite(TestExtensionForce))

  from TestDislocation import TestDislocation
  suite.addTest(unittest.makeSuite(TestDislocation))

  return suite


def main():
  """
  Run test suite.
  """
  unittest.TextTestRunner(verbosity=2).run(suite())
  return


# ----------------------------------------------------------------------
if __name__ == '__main__':
  main()

  
# End of file 