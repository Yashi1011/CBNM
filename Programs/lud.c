#include <stdio.h>

int main(){
	float a[3][3]={{1,-1,1},{1,1,1},{4,2,1}}, b[3]={-1,3,8}, l[3][3], u[3][3], x[3], y[3];
	int i,j,k;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			float sum=0;
			if(i>=j){
				for(k=0; k<j; k++){
					sum+=l[i][k]*u[k][j];
				}
				u[i][j]=0;
				l[i][j]=a[i][j]-sum;
			}
			else{
				for(k=0; k<i; k++){
					sum+=l[i][k]*u[k][j];
				}
				u[i][j]=(a[i][j]-sum)/l[i][i];
				l[i][j]=0;
			}
			if(i==j)
				u[i][j]=1;
		}
	}
	for(i=0; i<3; i++){
		float sum=b[i];
		for(j=0; j<i; j++){
			sum-=l[i][j]*y[j];
		}
		y[i]=sum/l[i][i];
		printf("y%d = %f\n",i+1,y[i]);
	}
	printf("\n");
	for(i=2; i>=0; i--){
		float sum=y[i];
		for(j=2; j>i; j--){
			sum-=u[i][j]*x[j];
		}
		x[i]=sum/u[i][i];
	}
	for(i=0;i<3;i++)
		printf("x%d = %f\n",i+1,x[i]);
	return 0;
}
