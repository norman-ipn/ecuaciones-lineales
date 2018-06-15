#include<stdio.h>
#include"sustituir.h"
#include"restar.h"
#include"reciproco.h"
#include"funcion_pedir_valores.h"
#include"pedirn.h"
#include"mostrar.h"
#include"imprimematriz.h"

int
main (void)
{
  float m[10][11];
  float x[10];
  int N, i = 0, j = 0, g = 0;
  printf ("\n---------------ELIMINACION DE GAUSS-------------\n");
  N = pedirn ();
  pedirvalores (m, N);
  printf ("La matriz ingresada es: \n");
  impmat (m, N);
  for (g = 0; g < (N + 1); g++)
    {

      for (i = g; i < N; i++)
        {
          multrecip (m, N, i);
          for (j = i + 1; j < N; j++)
            {
              restar (m, i, j, g, N);
            }
        }
    }
  printf ("\nLa matriz final es: \n");
  sustituir (m, x, N);
  impmat (m, N);
  printf ("\nLos resultados de las variables son: \n\n");
  mostrar (x, m, N);
  printf ("\n");
  return 0;
}

