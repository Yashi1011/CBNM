#include <stdio.h>

int main(){
	float x[]={1,2,3,4,5},f[]={1,4,9,16,25};
	float a=2.2,p,num,den,sum=0;
	int i,j,k;
	for(i=0;i<5;i++){
		den=1;
		num=0;
		for(j=0;j<5;j++){
			p=1;
			if(j!=i){
				for(k=0;k<5;k++){
					if(k!=i && k!=j){
						p*=(a-x[k]);
					}
				}
				num+=p;
				den*=(x[i]-x[j]);
			}
		}
		sum+=(num/den)*f[i];
	}
	printf("d/dx(2.2)=%f\n", sum);
}