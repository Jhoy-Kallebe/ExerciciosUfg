#include<stdio.h>
int main(){
    double n, rest, mult;
    int c, res;

    scanf("%lf",&n);
    mult = 1;
    c = 0;

    if(n != (int)n){
        while(c != 1) {
            mult++;
            res = n*mult;
            if(res == n*mult){
                c = 1;
            }
        }
        printf("%.0f/%.0f\n",(n*mult),mult);
    }  

    return 0;
}
