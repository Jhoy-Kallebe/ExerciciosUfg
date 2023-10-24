#include<stdio.h>
int main(){
    double num;
    int n1,n2,n3,n4,n5;
    
    scanf("%lf",&num);
    
    if(num/10000 < 10){
        n1 = num/10000;
        n2 = (num - n1*10000)/1000;
        n3 = (num - (n1*10000 + n2*1000))/100;
        n4 = (num - (n1*10000 + n2*1000 + n3*100))/10;
        n5 = (num - (n1*10000 + n2*1000 + n3*100 + n4*10));

        if(num/10000>1){
            if(n1 == n5){
                if(n2 == n4){
                    printf("PALINDROMO\n");
                } else {
                     printf("NAO PALINDROMO\n");
                }
            } else {
                printf("NAO PALINDROMO\n");
            }
        } else if(num/1000<10 && num/1000 >= 1){
            if(n2 == n5){
                if(n3 == n4){
                    printf("PALINDROMO\n");
                } else {
                     printf("NAO PALINDROMO\n");
                }
            } else {
                printf("NAO PALINDROMO\n");
            }
        } else if(num/100<10 && num/100 >= 1){
            if(n3 == n5){
                printf("PALINDROMO\n");
            } else {
                printf("NAO PALINDROMO\n");
            }
        } else if(num/10<10 && num/10 >= 1){
            if(n4 == n5){
                printf("PALINDROMO\n");
            } else {
                printf("NAO PALINDROMO\n");
            }
        }
    } else {
        printf("NUMERO INVALIDO\n");
    }

return 0;
}
