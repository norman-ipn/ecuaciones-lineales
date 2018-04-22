nclude<stdio.h>

   float restar(float m[][10], int i, int j, int n);

 int main(void){
	float m[10][10];
	int i,j;

 	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
		m[i][j]=1;
	}
}

	printf("Matriz ejemplo: \n");
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				printf("%.1f\t",m[i][j]);
       	}printf("\n");
}

	printf("\n Matriz resultado: \n");

	restar(m,0,1,10);

		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
			printf("%.1f\t",m[i][j]);
	}printf("\n");
}

  return 0;
}



 float restar(float m[][10],int i, int j, int n){
	
	int c=0;
	
	for(c=0;c<n;c++){
      if(m[j][c]=0){
	  m[j][c]=m[i][c];
}
	else{
	     m[j][c]=m[i][c]-m[j][c];
	     m[j][c]--;
}
}

  return m[j][c];
}
