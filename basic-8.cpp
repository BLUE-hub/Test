#include<stdio.h>
int main(){
	for(int i=1000;i<=9999;i++)
	if((i/1000==i%10)&&(i/100%10==i%100/10))
	printf("%d\n",i);
	return 0;
} 
