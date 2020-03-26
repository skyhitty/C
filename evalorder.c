/*
   written by Rod Chapman, Praxis
   21 November 2005
*/

#include "stdio.h"

static int d;

int f(int x)
{
  d = 5;
  return (x + 1);
}

int main (int argc, char **argv)
{
  int y;
  int a[4] = {1, 2, 3, 4};

  d = 2;
  y = a[d] + f (5); /* Buffer overflow here if R-to-L evaluation order... */
  printf ("Value of y is %d\n", y);
  return 0;
}
