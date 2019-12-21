#include <stdio.h>
#include <math.h>

int main(){
	float p,sum=0,x[]={1,2,3,4},f[4][4]={1,4,9,16};
	int i,j;
	float a=2.2;
	for(i=1;i<4;i++){
		for(j=i;j<4;j++){
			f[i][j]=(f[i-1][j]-f[i-1][j-1])/(x[j]-x[j-i]);
		}
	}
	for(i=0;i<4;i++){
		p=1;
		for(j=0;j<i;j++){
			p*=(a-x[j]);
		}
		sum+=p*f[i][i];
	}
	printf("f{2.2}=%f\n", sum);
}