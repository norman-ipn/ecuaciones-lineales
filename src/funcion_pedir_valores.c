#include<stdio.h>
void
pedirvalores (float m[10][11], int A)
{
  int fil = 0;
  int col = 0;
  for (fil = 0; fil < A; fil++)
    {
      for (col = 0; col < (A + 1); col++)
	{
	  printf ("Ingrese el coeficiente del lugar matriz[%d][%d]\t",
		  fil + 1, col + 1);
	  scanf ("%f", &m[fil][col]);
	}
    }
  printf ("\n");
}
