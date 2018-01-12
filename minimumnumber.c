#include<stdio.h>
void main()
{
int a[1000],max=0,i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
max=a[0];
for(i=0;i<n;i++)
{
if(max>a[i])
{
max=a[i];
}

}
printf("%d",max);



}