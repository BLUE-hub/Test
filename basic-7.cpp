#include<stdio.h>
int n;
int main(){
	for(int i=100;i<=999;i++){
	int s=0;
	int t,n=i;
	for(int j=0;j<3;j++){
		t=n%10;
		t=t*t*t;
		n=n/10;
		s=s+t;
	}	
	if(i==s)
	printf("%d\n",i);
	}
	return 0;
}
