#include<stdio.h>
void main()
{
int n,hr=0,min,k;
scanf("%d",&n);
k=n;
while(n>60)
{
n=n-60;
hr=hr+1;
}
min=k-(hr*60);
printf("%d %d",hr,min);


}