#include<stdio.h>
int main(){
    double s, i, n; 
    int test;
    
    scanf("%lf",&n);
    test = n;
    if(n > 0 && test == n){
        i = 1;
        s = 0;
        while(i <= n){
            s = s + 1/i;
            i = i + 1;
        }
        printf("%.6f\n",s);
    } else {
        printf("Numero invalido!\n");
    }

    return 0;
}
