#include<stdio.h>
#include<math.h>

int main(){
	float x[]={-2,-1,0,1,2},f[]={15,1,1,3,19};
	float sx,sfx,sx2,sf,n=5,a0,a1;
	for(int i=0;i<5;i++){
		sx+=x[i];
		sx2+=(x[i]*x[i]);
		sfx+=(f[i]*x[i]);
		sf+=f[i];
	}
	a1=((n*sfx)-(sf*sx))/((n*sx2)-(sx*sx));
	a0=(sf-(a1*sx))/n;
	printf("a0=%f\na1=%f\n",a0,a1);
}

