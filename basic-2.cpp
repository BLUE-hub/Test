#include<stdio.h>
int main(){
	int a[5]={};
	int i,j;
	for(i=0;i<=31;i++){
		int num=i;
		int s,t=0;
		while(num>=2){
			s=num%2;
			num=num/2;
			a[t++]=s;
		}
		a[t]=num;
		for(j=4;j>=0;j--){
			printf("%d",a[j]);
		}
		printf("\n");
	}
	return 0;
} 
