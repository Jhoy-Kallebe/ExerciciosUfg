#include<stdio.h>
int main(){
    int x, y, i;

    scanf("%d %d",&x,&y);

    if(x%2 == 0){
        i = 0;
        while(i<y){
            printf("%d ",x);
            x = x+2;
            i = i +1;
        }
        printf("\n");
    } else {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    return 0;
}
