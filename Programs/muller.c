#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double x1=0.25,x2=0.5,x3=1,x,lk=2,l,d,c,g;

double func(double x) {
    double value=log10(x)-x+3;
    return value;
}

double max(){
    double value1=((g)-(sqrt(pow(g,2)-(4*d*c*func(x3)))));
    double value2=((g)+(sqrt(pow(g,2)-(4*d*c*func(x3)))));
    if(abs(value2)>abs(value1) && value2!=0){
        return value2;
    } else {
        return value1;
    }
}

int main() {
	int i;
    printf("x-1 = %f\nx0  = %f\nx1  = %f\n",x1,x2,x3);
    for (i=0; i<10; i++) {
        d=lk+1;
        c=lk*((lk*func(x1))-(d*func(x2))+(func(x3)));
        g=(pow(lk,2)*func(x1))-(pow(d,2)*func(x2))+((lk+d)*func(x3));
        l=(-2*d*func(x3))/max();
        x=(x3)+((x3-x2)*l);
        if(isnan(x)){
            break;
        }
        printf("x%-2d = %f\n",i+2,x);
        x1=x2;
        x2=x3;
        x3=x;
        lk=l;
    }
    return 0;
}
