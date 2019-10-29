FLAGS=-Wall -g -O2 -pedantic
INCLUDES= -I../include

example_static_SOURCES = ConsoleExample.c split.c
example_static_LDFLAGS = -L../src ../src/.libs/libSDL_console.a

if HAVE_OPENGL
GLEXAMPLES = exampleGL exampleGL_static

exampleGL_static_SOURCES = ConsoleExample.c split.c
exampleGL_static_LDFLAGS = -L../src ../src/.libs/libSDL_console.a @EXAMPLE_LIBS@
exampleGL_static_CPPFLAGS = -DHAVE_OPENGL

exampleGL_SOURCES = ConsoleExample.c split.c
exampleGL_LDFLAGS = -L../src -lSDL_console  @EXAMPLE_LIBS@
exampleGL_CPPFLAGS = -DHAVE_OPENGL
else
GLEXAMPLES =
endif

example_SOURCES = ConsoleExample.c split.c
example_LDFLAGS = -L../src -lSDL_console

noinst_PROGRAMS = example example_static $(GLEXAMPLES)


EXTRA_DIST = ConsoleExample.c ConsoleExample.h split.c split.h ConsoleFont.gif LargeFont.gif background.jpg

