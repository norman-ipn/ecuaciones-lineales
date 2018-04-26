#include <stdio.h>


int
main (void)
{
  float matriz[4][5];		/*Propusimos una matriz ya definida para probar el programa */
  int fil = 0;
  int col = 0;

  for (fil = 0; fil < 4; fil++)
    {				/* Necesitamos iteraciones para ir pidiendo los coeficientes y acomodaarlos */
      for (col = 0; col < 5; col++)
	{
	  printf ("Ingrese el coeficiente del lugar matriz[%d][%d]", fil + 1, col + 1);	//j+1 e i+1 porque no se puede empezar a contar desde una fila que no existe (pues ambas variables están inicializadas en cero)
	  scanf ("%f", &matriz[fil][col]);	//Hay que guardar estas cosas en el lugar que les corresponde
	}

      for (fil = 0; fil < 4; fil++)
	{
	  for (col = 0; col < 5; col++)
	    {
	      printf ("%.3f", matriz[fil][col]);	//Imprimimos nada más para comprobar que la matriz se haya llenado correctamente
	    }
	  printf ("\n");
	}

    }

  return 0;
}
