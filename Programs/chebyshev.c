#include <stdio.h>
#include <math.h>

float fun(float x){
	return log10(x)-x+3;
}

float fun1(float x){
	return (1/x)-1;
}

float fun2(float x){
	return -(1/pow(x,2));
}

int main(){
	float x,y;
	int i;
	x=2;
	for(i=0;i<5;i++){
		y=x-(fun(x)/fun1(x))-((pow(fun(x),2)*fun2(x))/(2*pow(fun1(x),3)));
		printf("x%d=%f\nf(x%d)=%f\n\n",i+1,y,i+1,fun(y));
		x=y;
	}
	return 0;
}