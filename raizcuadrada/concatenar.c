int concatenar(int a,int b){
	int c=0;
	if((a<10 && b<10) || (a>=10 && b<10)){
		c=a*10+b;
	}
	if((a>=10 && b>=10) || (a<10 && b>=10)){
		c=a*100+b;
	}
	return c;
}
