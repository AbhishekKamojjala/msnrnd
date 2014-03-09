//median of single ll
#include<stdio.h>
#include<conio.h>
int n;
struct node
{
int data;
struct node *link;
};
struct node *temp=NULL;
struct node *first=NULL;
struct node *t3=NULL;
void push(int rm);
int median(int num);
void *malloc(size_t size);
void main()
{
int a[10],n,i;

 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 push(a[i]);
}
printf("%d",median(n));
getch();
}
void push(int rm)
{
struct node *r=(struct node*)malloc(sizeof(struct node));
if(first==NULL)
{
r->data=rm;
first=r;
temp=r;
}
else
{
r->data=rm;
temp->link=r;
temp=temp->link;
r->link=NULL;
}
}
int median(int num)
{
int x,i=0;
t3=first;
   if(num%2==0)
   {
   while(i<num/2-1)
   {
   t3=t3->link;
   x=(t3->data+t3->link->data)/2;
   i++;
   }
   }
   else
   {

   while(i<num/2)
   {
   t3=t3->link;
   i++;
   }
   x=t3->data;
   }
   return x;
}