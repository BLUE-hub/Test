#include<stdio.h>
int a[10000];
int i,n,min,max,s=0;
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=min=a[0];
	for(i=0;i<n;i++){
		s=s+a[i];
		if(a[i]<min) min=a[i];
		if(a[i]>max) max=a[i];
	}
	printf("%d\n%d\n%d",max,min,s);
	return 0;
}
