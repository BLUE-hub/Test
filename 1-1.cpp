#include<stdio.h>
int a[1000000];
int i;
int main(){
	int m;
	a[0]=1;a[1]=1;
    scanf("%ld",&m);
    for(i=2;i<m;i++)
	{
	a[i]=(a[i-1]+a[i-2])%10007;
	}
   printf("%d",a[m-1]);
   return 0;
} 
