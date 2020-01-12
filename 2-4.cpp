#include<stdio.h>
char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int b[10];
int m,n;
int main(){
	scanf("%d",&n);
	int i=0;
	if(n>=0&&n<=15) printf("%c",a[n]);
	else{
		  while(n){
		  	m=n%16;
		    b[i++]=m;
		    n=n/16;
		  }
	    int j;
	    for(j=i-1;j>=0;j--){
	    	printf("%c",a[b[j]]);
		}
   }
   	return 0;
 }
