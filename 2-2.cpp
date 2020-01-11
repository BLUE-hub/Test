#include<stdio.h>
#include<string.h>
 int a[400000];
 int b[400000];
 char s[100000];
 int n,i,j;
 int getNum(char c){
 	if(c>='0'&&c<='9')
 	return c-48;
 	else return c-55;
 }
 int main()
 {
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		int m=strlen(s);
		int k=0; 	
		for(j=m-1;j>=0;j--)
		{
			int num=getNum(s[j]);
			int flag=4;
			while(flag--)
			{
			    a[k++]=num%2;
				num=num/2;
			}
	    }
    	int sum=0,t=1,u=0;
	    for(j=0;j<k;j++)
		{
		  if(t==4||j==k-1)  //以免最后凑不到三位数 
		  {
			sum=sum+a[j]*t;
			b[u++]=sum;
			t=1;
			sum=0;
		  }else{
			     sum=sum+a[j]*t;
			     t*=2;
		        }
	    }
	    if(b[u-1]!=0||u==1)
	    printf("%d",b[u-1]);
	    for(j=u-2;j>=0;j--){
	    	printf("%d",b[j]);
		}
	printf("\n");
    }
    return 0;
 } 
 //注意局部变量与全局变量以及逻辑关系 
