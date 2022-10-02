#!/bin/bash
gcc -c *.c;
ar rc liball.a *.o;
chmod 777 liball.a
