
#include<stdio.h>


#include<stdio.h>

typedef struct{

  int n;
  int d;
}fraccion;

fraccion lee_fraccion(void){
	fraccion a;
	scanf("%d",&a.n);
	scanf("%d",&a.d);
	return a;
}

void imp_fraccion(fraccion a){

	printf("[%d/%d]",a.n,a.d);


}

/*fraccion a_impropia(fraccion a){

	fraccion b;
	b.e = 0;
	b.n = (a.e * a.d)+ a.n;
	b.d = a.d;
	return b;
}*/
void acomoda(int *a, int *b){

	int aux=0;
	    aux = *a;
	    *a = *b;
	    *b = aux;
}

int mcd(int a, int b){
	int r=0;

	while( b!= 0){

		r = a % b;
		a = b;
		b = r;

	}
	return a;
}
int mcd_fracs(fraccion a, fraccion b){

	int x = 0,y = 0,r = 0;
	    x = a.d;
	    y = b.d;

	if(x < y){
	  	acomoda(&x,&y);
	  }

    r = mcd(x,y);
      return r;
}

int mcm_fracs(fraccion a,fraccion b,int r){

	int mcm = 0;
	    mcm =( a.d * b.d) / r;

	    return mcm;
}


fraccion suma_fracs(fraccion a, fraccion b){

	fraccion r; int aux=0;

	         aux = mcd(a.d,b.d);
	         r.d = mcm_fracs(a,b,aux);
	         r.n = ((r.d/a.d) *a.n) + ((r.d/b.d )*b.n);

    return r;
}

fraccion multiplica_fracs(fraccion a , fraccion b){
	fraccion r;

	         r.n = (a.n * b.n);
	         r.d = (a.d * b.d);
	return r;

}

fraccion divide_fracs(fraccion a, fraccion b){
	fraccion r;

	         r.n = (b.d * a.n);
	         r.d = (a.d * b.n);

	return r;

}

fraccion resta_fracs(fraccion a,fraccion b){

	fraccion r; int aux = 0;
	  aux = mcd(a.d,b.d);
	  r.d = mcm_fracs(a,b,aux);
	  r.n = ((r.d/a.d) *a.n) - ((r.d/b.d )*b.n);

	  return r;
}

/*fraccion trans(fraccion a){
	fraccion aux;

	if (a.e != 0){
		aux = a_impropia(a);

		return aux;
	}
	else{

		return a;
	}
}*/
