#include<stdio.h>
int m,n;
char a[26];
int main(){
	scanf("%d""%d",&n,&m);
	a[0]='A';
	int i,j;
	for(i=0;i<26;i++){
		a[i+1]=a[i]+1;
	}
	int s=0;
	for(i=0;i<n;i++,s++){
		if(s<m){
		    for(j=s;j>0;j--){
		    	printf("%c",a[j]);
			}
		    for(j=0;j<m-s;j++){
		    	printf("%c",a[j]);
			}
	   }
	   else
	   for(int t=0,j=s;t<m;j--,t++){
	   	printf("%c",a[j]);
	   }
	   	printf("\n");
    }
     return 0;
}
