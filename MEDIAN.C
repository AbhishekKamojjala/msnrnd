#include<stdio.h>
#include<conio.h>
main()
{
int a[10],b[10],c[20],i,p=0,q=0,k=0,md,n,m;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
while(p!=n&&q!=m)//merges 2 arrays into c[]
{
if(a[p]<b[q])//value is added from a[] to c[]
{
c[k]=a[p];
k++;
p++;
}
else//value is added from b[] to c[]
{
c[k]=b[q];
k++;
q++;
}
}
while(p<n)//remaining elements from a[] added to c
{
c[k]=a[p];
k++;
p++;
}
while(q<m)//remaining elements from b[] added to c
{
c[k]=b[q];
k++;
q++;
}
for(i=0;i<k;i++)
{
printf("%d",c[i]);
}

if(k%2==0)//calculate median
{
md=(c[k/2]+c[(k-1)/2])/2;

}
else
{
md=c[k/2];
}
printf("%d",md);
}
