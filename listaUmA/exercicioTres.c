#include<stdio.h>
int main(){
    double r,h, vc, at, ab,al;

    scanf("%lf %lf",&r,&h);
    ab = 3.14159 * r *r;
    al = 2 * 3.14159*r*h;
    at = ab*2 + al;

    vc = at * 100;

    printf("%.2f",vc); 

    return 0;
}