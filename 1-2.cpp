#include<stdio.h>
#include<math.h>
int r;
double PI;
double s;
int main(){
	scanf("%d",&r);
	PI=atan(1.0)*4;
	s=PI*r*r;
	printf("%.7f",s);
	return 0;
}
