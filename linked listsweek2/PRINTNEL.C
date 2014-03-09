//print n element from end of linked list
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
void *malloc(size_t size);
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
for(i=0;i<n-k;i++)
{
temp=temp->link;
}
printf("%d \n",temp->data);
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
