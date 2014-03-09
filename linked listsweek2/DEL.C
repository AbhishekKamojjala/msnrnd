//delete last n nodes of ll
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
void push(int rm);
void *malloc(size_t size);
void display();
void main()
{
int a[10],n,i,k;

 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 push(a[i]);
}
scanf("%d",&k);
temp=first;
for(i=1;i<n-k;i++)
{
temp=temp->link;
}
temp->link=NULL;
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
