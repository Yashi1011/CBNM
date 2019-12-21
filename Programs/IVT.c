//Intermediate Value Theorem.
#include<stdio.h>
#include<math.h>

//Enter the function for which you want to find the interval
float f(float x){
	return x-exp(-x);	
}

int main(){
	int i=0,a,b;
	float y1,y2;
        while(1){
                y1=f(i);
                y2=f(i+1);
                if(y1*y2<0){
                        a=i;
                        b=i+1;
                        break;
                }
                i++;
        }
        printf("Root lies in the range = (%d, %d)\n",a,b);
	return 0;
}
