#include<stdio.h>		/* fprintf */
#include<errno.h>		/* ENOMEM */
#include<stdlib.h>		/* malloc  */

#include "usuario.h"		/* pedir_numero_ecuaciones y capturar_datos */
#include "gauss.h"		/* aplicar_gauss_jordan */
#include "resultado.h"		/* mostrar_resultado */

int
main (void)
{
  const int MAX_ECUACIONES = 1000;
  double *matriz = NULL;

  int n = 0;

  n = pedir_numero_de_ecuaciones ();

  matriz =
    (double *) malloc (sizeof (double) * MAX_ECUACIONES *
		       (MAX_ECUACIONES + 1));
  if (matriz == NULL)
    {
      fprintf (stderr,
	       "No hay memoria suficiente para almacenar esa cantidad de información\n");
      return ENOMEM;
    }


  capturar_datos (matriz, n);
  aplicar_gauss_jordan (matriz, n);
  mostrar_resultado (matriz, n);

  return 0;
}
