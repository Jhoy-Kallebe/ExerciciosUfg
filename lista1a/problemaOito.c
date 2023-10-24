#include<stdio.h>
int main(){
	double preco, dist, imp, z;
	scanf("%lf",&preco);
	scanf("%lf",&dist);
	scanf("%lf",&imp);
	z = preco + (preco*(dist/100))+ (preco*(imp/100));
	printf("O VALOR DO CARRO E = %.2f\n", z);
}
