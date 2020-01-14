#include<stdio.h>
int m,n;
int main(){
	scanf("%d",&n);
	int a[n],b[n]={-1};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	int j=0;
	for(int i=0;i<n;i++){
		if(a[i]==m){
			b[j++]=i+1;
		}
	}
	printf("%d",b[0]);
	return 0;
}
