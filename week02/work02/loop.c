/*

* (c) 2013-2016 Rahmat M. Samik-Ibrahim

* This is free software.

* REV00 Tue Sep 20 16:43:44 WIB 2016

* START 2013

*/

#define LINETXT "==========\n"

#define OLOOPTXT "OL [%4.4d]\n"

#define OLOOP 3

#define ILOOP 4

#include <stdio.h>

void main() {

int ii, jj;

printf(LINETXT);

for (ii=0; ii<OLOOP; ii++) {

printf(OLOOPTXT, ii);

for (jj=0; jj<ILOOP; jj++) {

printf(" IL[%d]\n",jj);

}

}
printf(LINETXT);

}
