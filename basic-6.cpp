#include<stdio.h>
int n;
int main(){
	scanf("%d",&n);
	int a[n][n]={1};
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			if(j==0||i==j){
				a[i][j]=1;
			}
			else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
