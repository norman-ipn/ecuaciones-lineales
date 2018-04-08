/*Nos toco realizar la funcion mostrar();
BY:
	-Espinosa Altamirano Misael
	-Ortiz Chávez Karla
	-Torres Uraga Saul 
	Para probarla creamos DaDatos(); && AcomodaReglonglones();*/
#include <stdio.h>
void Mostrar(float[][5],int,int);
void DaDatos(float[][5],int,int);
void AcomodaRenglones(float[][5],int,int);
//void Unos(float [][5],int,int);
int main()
{//arreglos de [0][0] a [4][5];
	int n=0,m=0;
	printf("Dame n para crear matriz n x n+1 \n");//n<4
	scanf("%d",&n);
	m=n+1;
	float mxn[n][m];// x, y, aux, i;//fila-columna; i contador para acomodar el arreglo
    DaDatos(mxn,n,m);
	Mostrar(mxn,n,m);
	AcomodaRenglones(mxn,n,m);
	Mostrar(mxn,n,m);
	//Unos(mxn,n,m);
	//Mostrar(mxn,n,m);
	return 0;
}
void Mostrar (float mxn[][5],int n, int m)
{
	int x=0,y=0;
	printf("\n");
	for(x = 0; x < n; x++)
	{
		for(y = 0; y < m; y++)
		{
			printf("%.2f ",mxn[x][y]);
        }
		printf("\n");
	}
	printf("\n");
}
void DaDatos(float mxn[][5],int n, int m)
{//numeros>0
	int x=0,y=0;
	printf("\n");
	for(x = 0; x < n; x++)
	{
		for(y = 0; y < m; y++)
		{
            printf("Posicion [%i][%i]\n",x+1,y+1 );
			scanf("%f",&mxn[x][y]);
		}
	}
	printf("\n");
}
void AcomodaRenglones(float mxn[][5],int n, int m)
{
	int x=0,y=0,i=0,aux=0;
	printf("\n");
	for(i = 0; i < n-1; i++)
        for(x = 0; x < n-1; x++)
            if((mxn[x][0] >= 1) && (mxn[x][0] > mxn[x+1][0]))
                for(y = 0; y < m; y++)
                {
                    aux = mxn[x][y];
                    mxn[x][y] = mxn[x+1][y];
                    mxn[x+1][y] = aux;
                }
    printf("\n");
}
/*
void Unos(float mxn[][5],int n, int m)
{
	int x=0,y=0,div=0;
	printf("\n");
	for(x=0;x<n;x++)
		for(y=0;y<m;y++)
		{
			if(x==y)
			{
				for(y=0;y<m;y++){
				div=mxn[x][y];
				mxn[x][y]=mxn[x][y]/div;
				//mxn[x][y+1]=div;
				//toda la fila dividiva
				}			
			}
		}
	printf("\n");
}*/