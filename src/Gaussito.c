//Matriz Homogenea
//3 2 4 6 4 4 6 2 4 4 2 2 4 
#include <stdio.h>
void    IngresaMatriz(float[][10], int, int);
void    Mostrar(float[][10], int, int);
void    SinSol(float[][10], int, int);
void    Ceros(float[][10], int, int, int);
void    Unos(float[][10], int, int, int);
int 
main(void)
{
    int m = 0, n = 0, i = 0;
    printf("Ingresa m para crear una matriz de m x n donde n=m+1\n");
    scanf("%i",&m);
    n = m + 1;
    float Mat[10][10];
    IngresaMatriz(Mat, m, n);
    for(i=0; i <m ; i++)
    {
        Unos(Mat, m, n, i);
        Ceros(Mat, m, n, i);
    }
    
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
void Unos(float mxn[][10], int m, int n, int k)
{
    int x =  k, y = k, i = 0;
    float cts = 0, aux = 0;
    cts = mxn[x][y];
    for(y = k; y < n; y++)
    {
        aux = (mxn[x][y]/cts);
        mxn[x][y] = aux;
    }
    Mostrar(mxn, m, n);
}
void Ceros(float mxn[][10], int m, int n, int k)
{
    int x = k, y = k, i = 0;
    float cts = 0,  aux = 0;
    for(x = k; x < m-1; x++)
    {    
        y=k;             
        cts = ((-1)*(mxn[x+1][y]/mxn[k][k]));  
        for(y = k; y < n; y++)
        {
            aux = (((cts)*(mxn[k][y]))+mxn[x+1][y]);
            mxn[x+1][y] = aux;
        }
    }

    Mostrar(mxn, m, n);
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
}//Matriz Homogenea
//3 2 4 6 4 4 6 2 4 4 2 2 4 
#include <stdio.h>
void    IngresaMatriz(float[][10], int, int);
void    Mostrar(float[][10], int, int);
void    SinSol(float[][10], int, int);
void    Ceros(float[][10], int, int, int);
void    Unos(float[][10], int, int, int);
int 
main(void)
{
    int m = 0, n = 0, i = 0;
    printf("Ingresa m para crear una matriz de m x n donde n=m+1\n");
    scanf("%i",&m);
    n = m + 1;
    float Mat[10][10];
    IngresaMatriz(Mat, m, n);
    for(i=0; i <m ; i++)
    {
        Unos(Mat, m, n, i);
        Ceros(Mat, m, n, i);
    }
    
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
void Unos(float mxn[][10], int m, int n, int k)
{
    int x =  k, y = k, i = 0;
    float cts = 0, aux = 0;
    cts = mxn[x][y];
    for(y = k; y < n; y++)
    {
        aux = (mxn[x][y]/cts);
        mxn[x][y] = aux;
    }
    Mostrar(mxn, m, n);
}
void Ceros(float mxn[][10], int m, int n, int k)
{
    int x = k, y = k, i = 0;
    float cts = 0,  aux = 0;
    for(x = k; x < m-1; x++)
    {    
        y=k;             
        cts = ((-1)*(mxn[x+1][y]/mxn[k][k]));  
        for(y = k; y < n; y++)
        {
            aux = (((cts)*(mxn[k][y]))+mxn[x+1][y]);
            mxn[x+1][y] = aux;
        }
    }

    Mostrar(mxn, m, n);
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
