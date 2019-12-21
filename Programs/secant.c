#include <stdio.h>
#include <math.h>

float fun(float x){
	return cos(x)-x*exp(x);
}

int main(){
	float a=0,b=1,x;
	int i;
	for(i=0;i<5;i++){
		x=b-((b-a)*fun(b))/(fun(b)-fun(a));
		printf("%d %f\n",i+2,x );
		a=b;
		b=x;
	}
	printf("\nRoot = %f\n",x);
	return 0;
}
