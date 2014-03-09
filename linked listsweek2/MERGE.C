//merge 2 single linked  lists
#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node *link;
};
struct node *temp=NULL;
struct node *first=NULL;
struct node *first1=NULL;
struct node *temp1=NULL;
struct node *t3=NULL;
struct node *t1=NULL;
struct node *t2=NULL;
struct node *f3=NULL;
void push(int rm);
void push1(int rm);
void merge();
void *malloc(size_t size);
void main()
{
int a[10],b[10],n,m,i;
scanf("%d %d",&n,&m);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 push(a[i]);
}
 for(i=0;i<m;i++)
 {
 scanf("%d",&b[i]);
 push1(b[i]);
}

  merge();
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
void push1(int rm)
{
struct node *r=(struct node*)malloc(sizeof(struct node));
//struct node *first1=NULL;
if(first1==NULL)
{
r->data=rm;
first1=r;
temp1=r;
}
else
{
r->data=rm;
temp1->link=r;
temp1=temp1->link;
r->link=NULL;
}
}
void merge()
{
t1=first;
t2=first1;
while(t1->data!=NULL&&t2->data!=NULL)
{
if(t1->data<t2->data)
{
if(t1->data==first->data&&t3->data==NULL)
{
t3=f3=t1;
t1=t1->link;
}
else
{
t3->link=t1;
t1=t1->link;
t3=t3->link;
}
}
else
{
if(t2->data==first1->data&&t3->data==NULL)
{
t3=f3=t2;
t2=t2->link;
}
else
{
t3->link=t2;
t2=t2->link;
t3=t3->link;
}
}
}
if(t1==NULL)
{
t3->link=t2;
}
if(t2==NULL)
{
t3->link=t1;

}
for(t3=f3;t3->data!=NULL;t3=t3->link)
{
printf("%d \n",t3->data);
}
}


