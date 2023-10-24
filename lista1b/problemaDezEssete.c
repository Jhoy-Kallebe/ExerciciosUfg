#include<stdio.h>
int main(){
	double a,b,c,d,m,m1,m2,m3;
	scanf("%lf",&a);
	m3 = a;
	
    scanf("%lf",&b);
	if(b>m3){
		m2 = b;
	} else {
		m2 = m3;
        m3 = b;
	}
	
    scanf("%lf",&c);
	if(c>m3){
	    if(c>m2){
		    m1 = c;
        } else {
            m1 = m2;
            m2 = c;
        }
	}else {
	    m1 = m2;
        m2 = m3;
        m3 = c;
    }
	
    scanf("%lf",&d);
	if(d > m3){
		if(d > m2){
            if (d > m1){
                m = d;
            } else { 
                m = m1;
                m1 = d;
            }
        } else {
            m = m1;
            m1 = m2;
            m2 = d;
        }
	} else {
        m = m1;
        m1 = m2;
        m2 = m3;
        m3 = d;
    }

	printf("%.2f, %.2f, %.2f, %.2f\n ",m3,m2,m1,m);

return 0;
}
