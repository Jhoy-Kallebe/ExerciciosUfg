#include<stdio.h>
int main(){
	int x,aUm,aDois,aTres,y;
	scanf("%d",&x);

	aUm = x/100;
	aDois = (x-aUm*100)/10;
	aTres = x-(aUm*100+aDois*10);
	y = (aUm+aDois*3+aTres*5)%7;

	printf("O NOVO NUMERO E = %d%d\n",x,y);

}
