#include<stdio.h>
void main()
{
int a[10],i,n,pos,num;
printf("enter the no of elements");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n enter the position to be deleted");
scanf("%d",&pos);
if(pos>n)
{
printf("this positon not to be deleted");
}

else if(pos==0)
{
	printf("This Position not to be deleted");
}
else
{
for(i=pos-1;i<=n-1;i++)
{
a[i]=a[i+1];
}
printf("resulted array:");
for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}}}
