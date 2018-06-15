#include<stdio.h>
void
impmat (float a[10][11], int n)
{
  int j, i;

  for (i = 0; i < n; i++)
    {
      for (j = 0; j < (n + 1); j++)
	printf ("%.2f\t", a[i][j]);
      printf ("\n\n");
    }
}
