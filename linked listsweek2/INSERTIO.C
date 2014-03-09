//insert node in circular linked list and result is sorted circular ll
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
struct node *last=NULL;
void push(int rm);
void insert(int k,int y);
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
last=temp;
temp->link=first;
scanf("%d",&k);
insert(k,n);
display(n);
getch();
}
void display(int n)
{
int i;
temp=first;
for(i=0;i<=n+1 ;i++)
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
void insert(int k,int y)
{
struct node *s=(struct node*)malloc(sizeof(struct node));
int i=1;
temp=first;
while(i<y)
{
if(first->data>k)
{
s->data=k;
s->link=first;
first=s;
break;
}
else if(temp->link->data>k&&temp!=last)
{
s->data=k;
s->link=temp->link;
temp->link=s;
break;
}
if(last->data<k)
{
s->data=k;
s->link=first;
last->link=s;
last=s;
break;
}
i++;
temp=temp->link;
}
}