#include<stdio.h>
int main(){
	int x, h, m, s;
	scanf("%d",&h);
	scanf("%d",&m);
	scanf("%d",&s);

	x = h*60*60 + m*60 + s;

	printf("O TEMPO EM SEGUNDOS E = %d\n",x);
}
