#include<stdio.h>
int m,n,i,j,t;
int a[200];
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		a[i]=m;
	}
	for(i=1;i<n;i++){
		t=a[i];
		for(j=i-1;j>-1 && a[j]>t;j--){
			a[j+1]=a[j];
		}
		a[j+1]=t;
	}
	for(j=0;j<n;j++){
	printf("%d ",a[j]);
}
	return 0;
}  
