#include<stdio.h>
void
mostrar(float x[10], float m[10][11], int n)
{
  int i = 0;

  if ((m[n - 1][n - 1] != 0 && m[n - 1][n] != 0)
      || (m[n - 1][n - 1] != 0 && m[n - 1][n] == 0))
    {
      for (i = 0; i < n; i++)
	{
	  printf ("X%d= %.4f\t", i + 1, x[i]);
	}
    }
  if (m[n - 1][n - 1] == 0 && m[n - 1][n] == 0)
    {
      printf ("Tiene INFINITAS soluciones.\n");
    }
  if (m[n - 1][n - 1] == 0 && m[n - 1][n] != 0)
    {
      printf ("NO tiene soluciones.\n");

    }
}
