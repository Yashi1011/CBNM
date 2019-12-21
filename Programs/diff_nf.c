#include <stdio.h>
#include <math.h>

int main(){
	float x[]={1.0,1.1,1.2,1.3,1.4,1.5,1.6},f[7][7]={7.989,8.403,8.781,9.129,9.451,9.750,10.031};
	float a=1.1,d=0,h=x[1]-x[0];
	int i,j;
	for(i=1;i<7;i++){
		for(j=i;j<7;j++){
			f[i][j]=f[i-1][j]-f[i-1][j-1];
			printf("%f\t",f[i][j] );
		}
		printf("\n");
	}
	for(i=1;i<5;i++){
		d+=pow(1,i+1)*f[i][6]/i;
	}
	printf("d(1.6)/dx=%f\n", d/0.1);
	//d=f[2][1]-f[3][1]+f[4][1]*11/12;
	//printf("d^2(1.1)/dx^2=%f\n", d/0.01);
}