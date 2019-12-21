#include<stdio.h>

int main(){
	float x[3][4]={{1,-1,1,-1},{1,1,1,3},{4,2,1,8}};
	float sum, ans[3];
	int i,j,k;
	for(k=1;k<3;k++){
		for(i=k;i<3;i++){
			for(j=k;j<4;j++){
				x[i][j]=x[i][j]-(x[i][k-1]/x[k-1][k-1])*x[k-1][j];
			}
		}
	}
	for(i=2;i>=0;i--){
		sum=x[i][3];
		for(j=2;j>i;j--){
			sum-=x[i][j]*ans[j];
		}
		ans[i]=sum/x[i][i];
	}
	for(i=0;i<3;i++){
		printf("%f\n",ans[i] );
	}
}