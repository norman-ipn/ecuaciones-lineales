#include "concatenar.h"
int
hacerbotita (int par[5], int p, int resul)
{
  int i = 0, t = 0, tem = 0, digito = 0, h = 0, q = 0, k = 0, nx = 0;
  if (resul != 0)
    {
      for (p = p; p < 4; p++)
	{
	  t = par[p] - (resul * resul);
	  h = t * 100 + par[p + 1];
	  k = resul * 2;
	  if (h > 99 && h <= 999)
	    {
	      q = h / 10;
	    }
	  else if (h > 999 && h <= 9999)
	    {
	      q = h / 100;
	    }
	  for (i = 1; i <= 10; i++)
	    {
	      tem = i * k;
	      if (tem > q)
		{
		  digito = i - 1;
		  break;
		}
	    }
	  nx = concatenar (k, digito) * digito;
	  if (nx > h)
	    {
	      digito = digito - 1;
	      resul = concatenar (resul, digito);
	      nx = concatenar (k, digito) * digito;
	      par[p + 1] = h - nx;
	    }
	  else
	    {
	      resul = concatenar (resul, digito);
	      nx = concatenar (k, digito) * digito;
	      par[p + 1] = h - nx;
	    }
	}
    }
  return resul;
}
