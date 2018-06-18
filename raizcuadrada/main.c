#include <stdio.h>
#include "encontrarn.h"
#include "hacerpares.h"
#include "recibirnumero.h"
#include "encontrarprimerpar.h"
#include "obtenerprimerraiz.h"
int
main ()
{
  int r = 0, N = 0, p = 0, resul = 0, par[5];
  N = recibirnumero (r, N, par);
  p = encontrarprimerpar (N);
  resul = obtenerprimerraiz (par, p, N);
  return 0;
}
