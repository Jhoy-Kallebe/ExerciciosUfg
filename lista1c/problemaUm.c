#include<stdio.h>
int main(){
    int test, public, i;
    double p, g, a, c, price;

    scanf("%d",&test);
    i = 0;
    while(i<test){
        scanf("%d %lf %lf %lf %lf",&public,&p,&g,&a,&c);
        price = ((p/100) * public * 1)+((g/100) * public * 5)+((a/100) * public * 10)+((c/100) * public * 20);
    
        printf("A RENDA DO JOGO N. 1 E = %.2f\n",price);

        i++;
    }

return 0;
}
