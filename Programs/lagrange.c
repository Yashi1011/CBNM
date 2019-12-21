#include <stdio.h>
#include <math.h>

int main(){
	float l,sum=0,x[]={1,2,3,4},f[]={1,4,9,16};
	int i,j;
	float a=2.2;
	for(i=0;i<4;i++){
		l=1;
		for(j=0;j<4;j++){
			if(i!=j){
				l*=(a-x[j])/(x[i]-x[j]);
			}
		}
		sum+=l*f[i];
	}
	printf("f(2.2)=%f\n",sum);
	return 0;
}