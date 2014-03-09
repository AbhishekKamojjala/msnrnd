//reverse linked list with recursion
#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
};
struct node *temp=NULL;
struct node *first=NULL;
struct node *t1=NULL;
struct node *t2=NULL;
void push(int rm);
void *malloc(size_t size);
void display();
void main()
{
int a[10],n,i;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 push(a[i]);
}
t1=first;
swap(1,n);
display();
getch();
}
void display()
{
for(temp=first;temp!=NULL;temp=temp->link)
{
printf("%d",temp->data);
}
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
int swap(int k,int n)
{
int j,x;
t2=t1;
for(j=k;j<n-k+1;j++)
{
t2=t2->link;
}
x=t1->data;
t1->data=t2->data;
t2->data=x;
t1=t1->link;
if(k==n/2)
return 1;
else
{
k=k+1;
swap(k,j);
 return 0;
 }
}
