//convert into single sorted circular linked list
#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
};
struct node *temp=NULL;
struct node *first=NULL;
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
temp->link=first;
display(n);
getch();
}
void display(int n)
{
int i;
temp=first;
for(i=0;i<=n;i++)
{
printf("%d",temp->data);
temp=temp->link;
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
temp->link=NULL;
}
}
