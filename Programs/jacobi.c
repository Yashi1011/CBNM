#include<stdio.h>

int main(){
	float x1=0,x2=0,x3=0,a,b,c;
	int i;
	for(i=0;i<6;i++){
		a=(-1+2*x2-3*x3)/5;
		b=(2+3*x1-x3)/9;
		c=(3-2*x1+x2)/-7;
		x1=a;
		x2=b;
		x3=c;
	        printf("x1 = %f\tx2 = %f\tx3 = %f\n",x1,x2,x3);

	}
	printf("x1=%f\nx2=%f\nx3=%f\n",x1,x2,x3);
	return 0;
}
