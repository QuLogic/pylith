# -*- Makefile -*-
#
# ----------------------------------------------------------------------
#
# Brad T. Aagaard, U.S. Geological Survey
# Charles A. Williams, GNS Science
# Matthew G. Knepley, University of Chicago
#
# This code was developed as part of the Computational Infrastructure
# for Geodynamics (http://geodynamics.org).
#
# Copyright (c) 2010-2015 University of California, Davis
#
# See COPYING for license information.
#
# ----------------------------------------------------------------------
#

dist_noinst_DATA = \
	mesh2Din3D.txt \
	cube2_ascii.gmv \
	cube2_ascii.pset \
	cube2.txt \
	twohex8.exo \
	twohex8.txt \
	point.txt \
	points.txt

noinst_TMP = \
	cube2_test.txt \
	mesh2Din3D_test.txt \
	twohex8_test.txt

# 'export' the input files by performing a mock install
export_datadir = $(top_builddir)/unittests/pytests/meshio/data
export-data: $(dist_noinst_DATA)
	if [ "X$(top_srcdir)" != "X$(top_builddir)" ]; then for f in $(dist_noinst_DATA); do $(install_sh_DATA) $(srcdir)/$$f $(export_datadir); done; fi

clean-data:
	if [ "X$(top_srcdir)" != "X$(top_builddir)" ]; then for f in $(dist_noinst_DATA) $(noinst_TMP); do $(RM) $(RM_FLAGS) $(export_datadir)/$$f; done; fi

BUILT_SOURCES = export-data
clean-local: clean-data


# End of file 
