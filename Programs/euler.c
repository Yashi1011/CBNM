#include<stdio.h>

float f(float x, float y){
	return (2*x+3*y);
}

int main(){
	float x0=0,y0=1,y,x=0,h=0.1;
	int i,j;
	for(i=0;i<5;i++){
		y=y0+(f(x0,y0)*h);
		x=x+h;
		for(j=0;j<10;j++){
			y=y0+(((f(x0,y0)+f(x,y))/2)*h);
		}
		printf("y%d = %f  at  x = %f\n",i+1,y,x);
		y0=y;
		x0=x;
	}
}
