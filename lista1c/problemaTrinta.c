#include<stdio.h>
int main(){
    double n;
    int nCast, i, valid;

    do {
        scanf("%lf",&n);
        nCast = n;

        if(nCast == n && nCast>0){
            if( n > 1 )
                printf( "%.0f = " , n );

            for(i = 2;i <= nCast; i = i + 1) {
                while(nCast % i == 0){
                    if(i==nCast){ 
                        printf("%d\n",i);
                        nCast = nCast/i;
                    } else {
                        printf("%d x ",i);
                        nCast = nCast/i;
                    }
                }
            }
            valid = 0;
        } else {
            if(nCast == n) {
                printf("Fatoracao nao e possivel para o numero %d!\n",nCast);
                valid = 1;
            } else {
                printf("Fatoracao nao e possivel para o numero %.2f!\n",n);
                valid = 1;
            }
        }
    } while(valid == 1);

    return 0;
}
