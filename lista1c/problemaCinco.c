#include<stdio.h>
int main(){
    int a, r, n, i,s;

    scanf("%d %d %d",&a,&r,&n);
    s = 0;
    i = 1;
    while(i<=n){
        s = s + a;
        a = a + r;
        i = i + 1;
    }

    printf("%d\n",s);

    return 0;
}
