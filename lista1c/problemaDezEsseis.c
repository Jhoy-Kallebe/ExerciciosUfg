#include<stdio.h>
int main(){
    double ValorIngresso, ValorInicial, ValorFinal;
    double mv, ml, mni, l, n, despesas, arr;
    scanf("%lf %lf %lf",&ValorIngresso,&ValorInicial,&ValorFinal);

    ml = 0;
    mv = 0;
    mni = 0;

    while(ValorInicial <= ValorFinal){
        if(((ValorIngresso - ValorInicial) / 0.5) >= 0)
            n = ((ValorIngresso - ValorInicial) / 0.5)*25 + 120;
        else 
            n = ((ValorIngresso - ValorInicial) / 0.5)*30 + 120;

        arr = ValorInicial * n;
        despesas = 200 + 0.05*n;
        l = arr - despesas;

        printf("V: %.2f, N: %.0f, L: %.2f\n",ValorInicial,n,l);

        if(l >= ml){
            ml = l;
            mni = n;
            mv = ValorInicial;
        }

        ValorInicial=ValorInicial+1;
    }

    printf("Melhor valor final: %.2f\n",mv);
    printf("Lucro: %.2f\n",ml);
    printf("Numero de ingressos: %.0f\n",mni);
return 0;
}
