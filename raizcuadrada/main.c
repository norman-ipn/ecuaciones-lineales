#include <stdio.h>
#include "encontrarn.h"
#include "hacerpares.h"
#include "recibirnumero.h"
#include "encontrarprimerpar.h"
#include "obtenerprimerraiz.h"
#include "hacerbotita.h"
#include "concatenar.h"
#include "mostrarraiz.h"
#include "pedirr.h"
int
main ()
{
  int r = 0, N = 0, p = 0, resul = 0, par[5];
  r=pedirr();
  N = recibirnumero (r, par);
  p = encontrarprimerpar (N);
  resul = obtenerprimerraiz (par, p, N);
  resul = hacerbotita(par, p, resul);
  mostrarraiz(resul, r);
  return 0;
}
