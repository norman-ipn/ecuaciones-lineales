#include<stdio.h>
void
mostrarraiz(int resul, int r)
{
int residuo=0;
if(resul!=0)
{
residuo=r-(resul*resul);
printf ("Su raiz cuadrada es: %d con residuo %d.\n", resul,
		  residuo);
}
}
