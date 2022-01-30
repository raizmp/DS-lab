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
printf("\n enter the position to be inserted");
scanf("%d",&pos);
	if(pos>n)
	{
	printf("this positon not to be inserted");
	}
	else if(pos==0)
	
	{
		printf("This position not to be inserted");
	}
	
	else 
	{
	printf("enter the no to be inserted");
	scanf("%d",&num);
	n=n+1;
	
	
for(i=n-1;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=num;
printf("The rsulted array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}}}
