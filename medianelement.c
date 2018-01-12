#include<stdio.h>
void main()
{
int a[1000],max=0,i,n,j,temp,median;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}


}


}
median=(n/2);
printf("%d",a[median]);

}