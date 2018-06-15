#include <stdio.h>
int
pedirn ()
{
  int n;
  do
    {
      printf ("\nNumero de ecuacions que desea ingresar: ");
      scanf ("%d", &n);
      if (n < 0)
	{
	  printf ("Ingresar un numero mayor a cero\n\n");
	}
      else if (n > 10)
	{
	  printf ("Ingresar un numero menor a 11\n\n");
	}
    }
  while (n < 0 || n > 10);
  printf ("\n");
  return n;
}
