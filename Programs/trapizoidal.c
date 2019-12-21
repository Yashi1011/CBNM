#include <stdio.h>

int main()
{
	float x[]={1,1.1,1.2,1.3,1.4},f[]={1.543,1.669,1.811,1.971,2.151};
	float I=0,h=(x[4]-x[0])/4;
	int i;
	for(i=1;i<4;i++){
			I+=(2*f[i]);
	}
	I=(f[0]+f[4]+I)*(h/2);
	printf("I=%f\n",I);
	return 0;
}