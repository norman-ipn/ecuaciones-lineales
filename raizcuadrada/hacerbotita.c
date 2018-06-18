#include<stdio.h>
#include "concatenar.h"
int
hacerbotita (int par[5], int p, int resul)
{
  int i = 0, t = 0, tem = 0, digito = 0, h = 0, q = 0, k = 0, nx = 0, found =
    0;
  if (resul != 0)
    {
      for (p = p; p < 4; p++)
	{
	  t = par[p] - (resul * resul);
	  h = t * 100 + par[p + 1];
	  k = resul * 2;
	  if (t == 0)
	    {
	      q = h;
	      for (i = 1; i <= 10; i++)
		{
		  tem = concatenar (k, i);
		  if (tem == q)
		    {
		      digito = i;
		      break;
		    }
		  else if (tem > q)
		    {
		      digito = i - 1;
		      break;
		    }
		}
	    }
	  else
	    {
	      if (h > 99 && h <= 999)
		{
		  q = h / 10;
		}
	      else if (h > 999 && h <= 9999)
		{
		  q = h / 100;
		}
	      i = 1;
	      do
		{
		  i++;
		  tem = i * k;
		  if (tem > q)
		    {
		      digito = i - 1;
		      found = 1;
		    }
		}
	      while (found == 0);
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
