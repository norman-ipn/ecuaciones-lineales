#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main (void)
{
system("cls");
float com1,com2,com3,absx1,absy1,absz1,grande,rx,ry,rz,fin=0.0001,lx1,lx2,lx3,ly1,ly2,ly3,lz1,lz2,lz3,y=0,z=0,gx1,gy1,gz1,x1,y1,z1,res1,res2,res3,error=1; int inc=1;
INICIO:
printf("\nIngrese un valor para la literal de x de su primer ecuacion: ");
scanf("%f",&lx1);
printf("\nIngrese un valor para la literal de y de su primer ecuacion: ");
scanf("%f",&ly1);
printf("\nIngrese un valor para la literal de z de su primer ecuacion: ");
scanf("%f",&lz1);
printf("\nIngrese el resultado de la primer ecuacion: ");
scanf("%f",&res1);
printf("\nIngrese un valor para la literal de x de su segunda ecuacion: ");
scanf("%f",&lx2); printf("\nIngrese un valor para la literal de y de su segunda ecuacion: ");
scanf("%f",&ly2); printf("\nIngrese un valor para la literal de z de su segunda ecuacion: ");
scanf("%f",&lz2);
printf("\nIngrese el resultado de la segunda ecuacion: ");
scanf("%f",&res2);
printf("\nIngrese un valor para la literal de x de su tercer ecuacion: ");
scanf("%f",&lx3); printf("\nIngrese un valor para la literal de y de su tercer ecuacion: ");
scanf("%f",&ly3); printf("\nIngrese un valor para la literal de z de su tercer ecuacion: ");
scanf("%f",&lz3);
printf("\nIngrese el resultado de la tercer ecuacion: ");
scanf("%f",&res3);
if(sqrt((lx1)*(lx1)))
{
system("cls");
printf("\nNo se cumple la condicion por lo tanto en este caso el metodo no funcionara\n");
goto INICIO;
}
if(sqrt((ly2)*(ly2)))
{
system("cls");
printf("\nNo se cumple la condicion por lo tanto en este caso el metodo no funcionara\n");
goto INICIO;
}
if(sqrt((lz3)*(lz3)))
{
system("cls");
printf("\nNo se cumple la condicion por lo tanto en este caso el metodo no funcionara\n");
goto INICIO;
}
printf("\nSi se cumplen las condicones en este caso el metodo deveria funcionar");
getch();
system("cls");
printf("\n i x y z error");
printf("\n 0 0 0 0 1");
x1=(res1/lx1)+(((-ly1)/lx1)*(y))+((-lz1/lx1)*(z));
y1=(res2/ly2)+(((-lx2)/ly2)*(x1))+((-lz2/ly2)*(z));
z1=(res3/lz3)+(((-lx3)/lz3)*(x1))+((-ly3/lz3)*(y1));
printf("\n 1 %.5f %.5f %.5f 1",x1,y1,z1);
for(int i=0; i<=8; i++)
{
if(error<=fin)
{
goto FIN;
}
gx1=x1;
gy1=y1;
gz1=z1;
x1=((res1)/(lx1))+(((-ly1)/(lx1))*y1)+(((-lz1)/(lx1))*z1);
y1=((res2)/(ly2))+(((-lx2)/(ly2))*x1)+(((-lz2)/(ly2))*z1);
z1=((res3)/(lz3))+(((-lx3)/(lz3))*x1)+(((-ly3)/(lz3))*y1);
rx=sqrt((x1-gx1)*(x1-gx1));
ry=sqrt((y1-gy1)*(y1-gy1));
rz=sqrt((z1-gz1)*(z1-gz1));
absx1=sqrt((x1)*(x1));
absy1=sqrt((y1)*(y1));
absz1=sqrt((z1)*(z1));
if(absx1>absy1&&absx1>absz1)
{
grande=absx1;
}
if(absy1>absx1&&absy1>absz1)
{
grande=absy1;
}
if(absz1>absy1&&absz1>absx1)
{
grande=absz1;
}
if(rx>ry&&rx>rz)
{
error=sqrt((rx/grande)*(rx/grande));
}
if(ry>rx&&ry>rz)
{
error=sqrt((ry/grande)*(ry/grande));
}
if(rz>ry&&rz>rx)
{
error=sqrt((rz/grande)*(rz/grande));
}
inc++;
printf("\n %d %.5f %.5f %.5f %.5f",inc,x1,y1,z1,error);
}
FIN:
printf("\n\n\n Comprobacion");
com1=lx1*(x1)+(ly1*(y1))+(lz1*(z1));
com2=lx2*(x1)+(ly2*(y1))+(lz2*(z1));
com3=lx3*(x1)+(ly3*(y1))+(lz3*(z1));
printf("\n\n\n %.5f(%.5f)+( %.5f(%.5f))+( %.5f(%.5f)) =%.5f",lx1,x1,ly1,y1,lz1,z1,com1);
printf("\n %.5f(%.5f)+( %.5f(%.5f))+( %.5f(%.5f)) =%.5f",lx2,x1,ly2,y1,lz2,z1,com2);
printf("\n %.5f(%.5f)+( %.5f(%.5f))+( %.5f(%.5f)) =%.5f",lx3,x1,ly3,y1,lz3,z1,com3);
getch();
}
