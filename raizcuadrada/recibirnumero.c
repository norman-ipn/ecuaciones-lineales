#include<stdio.h>
#include "encontrarn.h"
#include "hacerpares.h"
int
recibirnumero (int r, int par[5])
{
int N=0;
  N = encontrarn (r);
  hacerpares (par, r);
  return N;
}
