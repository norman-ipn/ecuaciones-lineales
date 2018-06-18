#include<stdio.h>
int
obtenerprimerraiz (int par[5], int p, int N)
{
  int i = 0, t = 0, resultado = 0, residuo = 0;
  if (N != 0)
    {
      for (i = 2; i <= 10; i++)
	{
	  t = i * i;
	  if (t > par[p])
	    {
	      resultado = i - 1;
	      break;
	    }
	}
      if (p == 4)
	{
	  residuo = par[4] - (resultado * resultado);
	  printf ("Su raiz cuadrada es: %d con residuo %d.\n", resultado,
		  residuo);
	  resultado = 0;
	}
    }
  return resultado;
}
