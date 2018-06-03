//Matriz Homogenea
#include <stdio.h>
void	IngresaMatriz(float[][10], int, int);
void	Mostrar(float[][10], int, int);
void	SinSol(float[][10], int, int);
void 	Ceros(float[][10], int, int);
void 	Unos(float[][10], int, int);
int 
main(void)
{
	int m = 0, n = 0;
	printf("Ingresa m para crear una matriz de m x n donde n=m+1\n");
	scanf("%i",&m);
	n = m + 1;
	float Mat[m][n];
	IngresaMatriz(Mat, m, n);
//	SinSol(Mat, m, n);
	Ceros(Mat, m, n);
	Unos(Mat, m, n);
	return 0;
}
void IngresaMatriz(float mxn[][10], int m, int n)
{
	int x = 0, y = 0;
	for(x = 0; x < m; x++)
	{
		for(y = 0; y < n; y++)
		{
            printf("Posicion [%i][%i]\n",x+1,y+1 );
			scanf("%f",&mxn[x][y]);
		}
	}
	printf("\n");
	Mostrar(mxn, m, n);
}
void Mostrar (float mxn[][10], int m, int n)
{
	int x = 0, y = 0;
	for(x = 0; x < m; x++)
	{
		for(y = 0; y < n; y++)
		{
			printf("%.2f ",mxn[x][y]);
        }
		printf("\n");
	}
	printf("\n");
}
void SinSol(float mxn[][10], int m, int n)
{
	int x = 0, y = 0, SS = 0;
	for(x = 0; x < 1; x++)
	{
		for(y = 0; y < n-1; y++)
		{
            SS = mxn[x][y]+mxn[x][y+1];
			if (SS == 0 )
			{
				//if(y == n-2)
				printf("La Matriz no tiene solucion unica, i.e. el problema tiene variables libres\n");
			}	
		}
	}
}
void Ceros(float mxn[][10], int m, int n)
{
	int x = 0, y = 0, aux = 0, i = 0, cts = 0;
	/*for(x = 0; x < m; x++)
	{
		for(y = 0; y < n; y++)
		{
            if (x == y)
            {
            	aux = (((-1)*((mxn[x+1][y]/mxn[x][y]))*(mxn[x][y]))+mxn[x+1][y]);
            	mxn[x+1][y]=aux;

            }
		}
	}*/

	for(x = 0; x < m; x++)
    {    
//    	for(y = 0; y < m; y++)
//        {
            if(x == y)
            {
            	if (mxn[x+1][y] == 0)
            	{
            		
            	}
            	if(mxn[x+1][y] == mxn[x][y])
            	{
            		cts=((-1)*(mxn[x][y]));
            		for(y = 0; y < n; y++)
                	{
                    	aux = ((cts)+mxn[x+1][y]);
            			mxn[x+1][y] = aux;
                	}
            	}
            	if(mxn[x+1][y] > mxn[x][y] && mxn[x+1][y] != 0)
            	{
            		cts = ((-1)*(mxn[x+1][y]/mxn[x][y]));	
                	for(y = 0; y < n; y++)
                	{
                    	aux = (((cts)*(mxn[x][y]))+mxn[x+1][y]);
            			mxn[x+1][y] = aux;
                	}
            	}
            	if(mxn[x+1][y]<mxn[x][y] && mxn[x+1][y] != 0)
            	{
            		cts=((-1)*(mxn[x][y]));
            		for(y = 0; y < n; y++)
                	{
                    	aux = (((cts)*(mxn[x+1][y]))+mxn[x][y]);
            			mxn[x+1][y] = aux;
                	}
            	}
            }
//        }
    }

	Mostrar(mxn, m, n);
}
void Unos(float mxn[][10], int m, int n)
{
	int x = 0, y = 0, aux = 0, i = 0, cts = 0;
	/*for(x = 0; x < m; x++)
	{
		for(y = 0; y < n; y++)
		{
            if (x == y)
            {
            	aux = (((-1)*((mxn[x+1][y]/mxn[x][y]))*(mxn[x][y]))+mxn[x+1][y]);
            	mxn[x+1][y]=aux;

            }
		}
	}*/

	for(y = 0; y < n; y++)
    {    
//    	for(y = 0; y < m; y++)
//        {
            if(x == y)
            {
            	cts = mxn[x][y];
            	for(y = 0; y < n; y++)
            	{
            		aux = (mxn[x][y]/cts);
            		mxn[x][y] = aux;
            	}
            }
//        }
    }
	Mostrar(mxn, m, n);
}
