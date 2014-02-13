#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],max=0,count=0,i,j,temp;
for(i=0;i<100;i++)//array values are given
{
scanf("%d",&a[i]);
}
for(i=0;i<100;i++)//a value is selected from array starting from a[0]
{
for(j=0;j<100;j++)//compares above selected value with all the elements in the array
{
if(a[i]==a[j])
{
if(i>j)//if number is repeated number is skipped
{
break;
}
count++;
}
}
if(count>max)//multiple repested number is assinged to temp
{
max=count;
temp=a[i];
}
count=0;
}
printf("%d",temp);
}


