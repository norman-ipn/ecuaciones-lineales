#include<stdio.h>
int leeint();
void leemat(float [][10], int, int);
void impmat(float [][10], int, int);
void busca(float [][10], int, int);
int main(){
	int a, b;
	float mat[10][10];
	printf("Dame un numero de 1-10: ");
	do{
	a=leeint();
	}
	while((a<1)||(a>10));
	b=a+1;
	leemat(mat, a,b);
	printf("\n\nMatriz original:\n");
	impmat(mat, a,b);
	busca(mat, a, b);
	printf("\n\n");
	impmat(mat, a,b);

	return 0;
}
int leeint(){
	int n;
	scanf("%d", &n);
	return n;
}

void leemat(float mat[][10], int a, int b){
	int i,j;
	for(j=0; j<a; j++)
		for(i=0; i<b;i++){
			printf("mat[%d,%d]= ", j,i);
			scanf("%f",&mat[j][i]);
		}

}

void impmat(float mat[][10], int a, int b){
	int i,j;
	for(j=0; j<a; j++){
		for(i=0; i<b;i++)
		printf("%.2f\t",mat[j][i]);
	printf("\n");
	}
}

void busca(float mat[][10], int a, int b){
	int i,j,k;
	float aux;
	for(j=0; j<a; j++){
		for(i=0; i<b;i++){
		if((i<b-2)&&(j<a-1)){
			if(i==j){
				if(mat[j][i]==0){
					for(k=0; k<b; k++){
					aux=mat[j][k];
					mat[j][k]=mat[j+1][k];
					mat[j+1][k]=aux;
					}
				}
			}
		}
		else if((i==b-2)&&(j==a-1)){
			if(i==j){
				if(mat[j][i]==0){
					for(k=0; k<b; k++){
					aux=mat[j][k];
					mat[j][k]=mat[j-1][k];
					mat[j-1][k]=aux;
					}
				}
			}
		}
		}
	}
}
