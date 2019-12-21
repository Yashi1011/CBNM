#include <stdio.h>
#include <math.h>

//Function
float fun(float x){
	return cos(x)/exp(x);
}

//Differential function
float fun1(float x){
	return cos(x)-x*exp(x);
}

int main(){
	int i;
	float x,a,b;
	for(i=0;i<10;i++){
		if(fun1(i)*fun1(i+1)<0){
			a=i;
			b=i+1;
			break;
		}
	}
	printf("Interval in which root lies = (%f, %f)\n",a,b );
	x=(a+b)/2;
	for(i=0;i<10;i++){
		x=fun(x);	
	}
	printf("root = %f\n",x);
	return 0;
}
