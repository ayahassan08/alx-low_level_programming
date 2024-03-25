#!/bin/bash
gcc -shared -o libgiga.so -fPIC -ldl -D_GNU_SOURCE custom_random.c
LD_PRELOAD=./libgiga.so ./gm 9 8 10 24 75 9
