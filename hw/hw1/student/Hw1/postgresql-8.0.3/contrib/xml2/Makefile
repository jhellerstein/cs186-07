# This makefile will build the new XML and XSLT routines.

MODULE_big = pgxml

# Remove xslt_proc.o from the following line if you don't have libxslt
OBJS = xpath.o xslt_proc.o

# Remove -lxslt from the following line if you don't have libxslt.
SHLIB_LINK = -lxml2 -lxslt

DATA_built = pgxml.sql
DOCS = README.xml2

override CFLAGS += $(shell xml2-config --cflags)

ifdef USE_PGXS
PGXS = $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/xml2
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif

