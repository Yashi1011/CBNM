#include <stdio.h>
#include <math.h>

int main(){
	float p,sum=0,x[]={1,2,3,4},f[4][4]={1,4,9,16};
	int i,j;
	float a=2.2,h=x[1]-x[0];
	float u=(a-x[0])/h;
	for(i=1;i<4;i++){
		for(j=0;j<4-i;j++){
			f[i][j]=f[i-1][j+1]-f[i-1][j];
		}
	}
	for(i=0;i<4;i++){
		p=1;
		for(j=0;j<i;j++){
			p*=(u-j)/(j+1);
		}
		sum+=p*f[i][0];
	}
	printf("f(2.2)=%f\n",sum);
}