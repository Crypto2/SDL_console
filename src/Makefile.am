INCLUDES = -I../include

lib_LTLIBRARIES = libSDL_console.la

libSDL_console_la_SOURCES = \
	SDL_console.c \
	DT_drawtext.c \
	internal.c

libSDL_console_la_LDFLAGS = \
	-release $(LT_RELEASE) \
	-version-info $(LT_CURRENT):$(LT_REVISION):$(LT_AGE)
libSDL_console_la_LIBADD = @CON_LIBS@

