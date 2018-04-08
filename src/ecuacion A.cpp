/************************************/
/***Caamal Briseño Diego Alejandro***/
/**Tomar los datos de la ecuacion A**/
/************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    
    printf ("Tienes que poner datos para la siguiente ecuacion:\n");
    printf ("ax+by+c=d\n\n");
    printf("Ingresa el valor de a\n");
    scanf("%d",&a);
    printf("Ingresa el valor de b\n");
    scanf("%d",&b);
    printf("Ingresa el valor de c\n");
    scanf("%d",&c);
    printf("Ingresa el valor de d\n");
    scanf("%d",&d);
    
    system("cls");
    
    printf("Tu ecuacion es:\n");
    printf("%dx+%dy+%d=%d\n\n",a,b,c,d);
    
    system("pause");
    return(0);
}
