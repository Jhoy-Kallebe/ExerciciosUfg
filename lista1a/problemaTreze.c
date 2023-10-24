#include<stdio.h>
int main(){
	double a,b,c,d,e,f,x,y;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	scanf("%lf",&f);

	y = (a*f - d*c)/(a*e - d*b);
	x = (c - b*y)/a;

	printf("O VALOR DE X E = %.2f\n", x);
	printf("O VALOR DE Y E = %.2f\n", y);

}
