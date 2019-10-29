LIBTOOL_DEPS = @LIBTOOL_DEPS@
libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck
SUBDIRS = include src

EXTRA_DIST = \
	Doxyfile \
	makefile.VC6 \
	makefile.OSX \
	autogen.sh

#Rule to build tar-gzipped distribution package
$(PACKAGE)-$(VERSION).tar.gz: distcheck

