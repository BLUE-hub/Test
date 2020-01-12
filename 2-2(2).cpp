#include<stdio.h>
#include<string.h>
#include<math.h>
char c[100000];
int i,j,n,num;
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",c);
		int m=strlen(c);
		long long int s=0,t=1;
		for(j=m-1;j>=0;j--){
			if('0'<=c[j]&&c[j]<='9'||'a'<=c[j]&&c[j]<='f'||'A'<=c[j]&&c[j]<='F'){
				if('0'<=c[j]&&c[j]<='9'){
					num=c[j]-'0';
				}
				else if('a'<=c[j]&&c[j]<='f'){
					num=c[j]-'a'+10;
				}
				else {
					num=c[j]-'A'+10;
				}
				s=s+num*t;
				t*=16;
			}
			else printf ("error");
		}
		long long int l=0;
		int flag=0,sum=0;
		while(s){
			l=s%8;
			s=s/8;
			sum=sum+l*pow(10,flag);
			flag++;
		}
		printf("%d""\n",sum);	
	} 
	return 0;
}
