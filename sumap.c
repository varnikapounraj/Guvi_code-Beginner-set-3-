#include<stdio.h>
void main()
{
int n,a,d,k,result;
float x;
scanf("%d%d%d",&n,&a,&d);

x=(float)n/2;
k=(2*a)+((n-1)*d);
result=x*k;
printf("%d",result);
}