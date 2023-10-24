#include<stdio.h>
int main(){
	double A,B,C, p,a;
	scanf("%lf %lf %lf",&A,&B,&C);
	if(A+B>C && B+C>A && C+A>B){
		p = A+B+C;
		printf("Perimetro = %.1f\n",p);
	} else {
		a = ((A+B)*C)/2;
		printf("Area = %.1f\n",a);
	}

return 0;
}

