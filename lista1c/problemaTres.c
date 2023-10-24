#include<stdio.h>
int main(){
    double n;
    int i, teste;

    scanf("%lf",&n);
    teste = n;
    if(n>5 && n<2000 && n == teste){
        for(i = 2; i<=n; i++){
            if(i%2 == 0){
                printf("%dˆ2 = %d\n",i,(i*i));
            }
        }
    }

return 0;
}
