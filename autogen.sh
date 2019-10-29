#!/bin/sh

aclocal -I .
automake --foreign --add-missing --copy
autoconf

echo "Now you are ready to run ./configure"

