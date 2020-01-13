#include<stdio.h>
int n;
int main(){
	scanf("%d",&n);
	if(n>=1990&&n<=2050){
	if(n%4==0&&n%100!=0||n%400==0){
		printf("yes");
	}
	else printf("no");
  }
  else printf("error");
  return 0;
}

