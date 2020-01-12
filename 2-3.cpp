#include<stdio.h>
#include<string.h>
char c[9];
int i,j;
long long int num;
int main(){
		scanf("%s",c);
		int m=strlen(c);
		long long int s=0,t=1;
		for(j=m-1;j>=0;j--){
			if('0'<=c[j]&&c[j]<='9'||'A'<=c[j]&&c[j]<='F'){
				if('0'<=c[j]&&c[j]<='9'){
					num=c[j]-'0';
				}
				else {
					num=c[j]-'A'+10;
				}
				s=s+num*t;
				t*=16;
			}
			else printf ("error");
		} 
		printf("%lld",s);
     	return 0;}
