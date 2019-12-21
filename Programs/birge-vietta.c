#include <stdio.h>
#include <math.h>

float func(float p){
	int i,a[5]={1,-3,3,-3,2};
	float b[5],c[4];
	b[0]=a[0];
	c[0]=b[0];
	for (i=1; i<5; i++){
		b[i]=a[i]+(p*b[i-1]);
	}
	for (i=1; i<4; i++){
		c[i]=b[i]+(p*c[i-1]);
	}
	p=p-(b[4]/c[3]);
	return p;
}

int main() {
	int i;
	float p=0.5;
	printf("p0 = %f\n",p);
	for (i=0; i<5; i++){
		p=func(p);
		printf("p%d = %f\n",i+1,p);
	}
	return 0;
}
