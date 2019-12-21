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
		printf("%d %f %f %f\n",i+2,a,b,x );
		if(fun(a)*fun(x)<0){
			b=x;
		}
		else{
			a=x;
		}
	}
}