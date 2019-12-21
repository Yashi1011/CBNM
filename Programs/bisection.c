#include<stdio.h>
#include<math.h>

#define f(x) 2*(x-sin(x))-1

int main(){
	int i=0,j,a,b,n;
	float y1,y2;
	float x,y,m;
	while(1){
		y1=f(i);
		j=i+1;
		y2=f(j);
		if(y1*y2<0){
			a=i;
			b=i+1;
			break;
		}
		i++;
	}
	printf("Root lies in the range = (%d, %d)\n",a,b);
	x=a;
	y=b;
	printf("Enter the number of iterations : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		m=(x+y)/2;
		y1=f(m);
		y2=f(x);
		if(y1*y2<0){
			y=m;
		}
		else{
			x=m;
		}
		printf("%d\tm: %f\n",i+1,m);
	}
	printf("\nRoot is %f\n",(x+y)/2);
	return 0;
}
