#include<stdio.h>
#include "encontrarn.h"
#include "hacerpares.h"
int
recibirnumero (int r, int N, int par[5])
{
  printf ("Ingrese el numero para obtener su raiz cuadrada.\n");
  scanf ("%d", &r);
  N = encontrarn (r);
  hacerpares (par, r);
  return N;
}
