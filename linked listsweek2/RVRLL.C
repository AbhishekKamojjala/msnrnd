//reverse single linked list without recursion
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
int a[10],n,i,j,x;

 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 push(a[i]);
}
t1=first;
for(i=1;i<=n/2;i++)
{
t2=t1;
for(j=i;j<n-i+1;j++)
{
t2=t2->link;
}
x=t1->data;
t1->data=t2->data;
t2->data=x;
t1=t1->link;
}
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
