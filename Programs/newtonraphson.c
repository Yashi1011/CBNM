#include<stdio.h>
#include<math.h>

float fun(float x){
        float y=(3*x)-cos(x)-1;
        return y;
}

float diff(float x){
        float y=3+sin(x);
        return y;
}

int main(){
        float y,d,x=0.5;
        int i;
        for(i=0;i<5;i++){
                y=x-(fun(x)/diff(x));
                printf("x%d = %f\nf(x%d) = %f\n\n",i+1,y,i+1,fun(y));
		if((x>y && (x-y)<0.0001) || (x<y && (y-x)<0.0001)){
                        break;
                }
                x=y;
        }
	printf("Root is %0.3f\n",y);
}

