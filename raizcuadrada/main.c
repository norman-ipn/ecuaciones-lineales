#include <stdio.h>
#include "encontrarn.h"
#include "hacerpares.h"
#include "recibirnumero.h"
#include "encontrarprimerpar.h"
#include "obtenerprimerraiz.h"
#include "hacerbotita.h"
#include "concatenar.h"
int
main ()
{
  int r = 0, N = 0, p = 0, resul = 0, par[5];
  N = recibirnumero (r, N, par);
  p = encontrarprimerpar (N);
  resul = obtenerprimerraiz (par, p, N);
  resul = hacerbotita(par, p, resul);
printf("%d\n", resul);
  return 0;
}
