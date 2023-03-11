#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -C *.C
ar -rc liball.a *.O
ranlib liball.a
