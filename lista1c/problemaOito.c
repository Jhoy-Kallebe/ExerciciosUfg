#include<stdio.h>
int main(){
    double A, B;
    int anos, a, b;

    scanf("%lf %lf",&A,&B);
    a = A;
    b = B;
    
    if(B>A && B >= 0 && A >= 0 && a == A && b == B){
        while(B > A){
            B = B * 1.015;
            A = A * 1.03;
            anos = anos + 1;
        }

        printf("ANOS = %d\n",anos);
    }

    return 0;
}
