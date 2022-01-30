#include<stdio.h>
#define MAX_SIZE 100
int main()
{
int array[MAX_SIZE];
int n,i,s,flag;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
printf("enter the element to be search");
scanf("%d",&s);
flag=0;
for(i=0;i<n;i++)
{
if(array[i]==s)
{
flag = 1;
break;
}}
if(flag == 1)
{
printf("%d found at the position %d",s,i+1);
}
else
{
printf("the number does not exists in the array");
}
return 0;
}
