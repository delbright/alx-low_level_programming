#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *c -fpic -shared -o liball.so
