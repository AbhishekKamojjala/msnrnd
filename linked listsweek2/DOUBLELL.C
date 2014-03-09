//middle element in double ll
#include<stdio.h>
#include<conio.h>
int n;
struct node
{
int data;
struct node *rlink;
struct node *llink;
};
struct node *temp=NULL;
struct node *first=NULL;
struct node *t1=NULL,*t2=NULL;
void push(int rm);
void *malloc(size_t size);
void middle();
void display();
void main()
{
int a[10],i;
 int n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 push(a[i]);
 }
 middle(n);
 display();
 getch();
 }
 void push(int rm)
 {
struct node *r=(struct node*)malloc(sizeof(struct node));
if(first==NULL)
{
r->data=rm;
r->rlink=NULL;
r->llink=NULL;
t1=first=r;
}
else
{
r->data=rm;
t1->rlink=r;
r->llink=t1;
r->rlink=NULL;
t1=t1->rlink;
}
}
void middle(int k)
{
t2=first;
if(k%2==0)
{
printf("no middle\n");
}
else
{
while(t1->llink->data!=t2->rlink->data)
{
t1=t1->llink;
t2=t2->rlink;
}
t1=t1->llink;
printf("%d",t1->data);
}
}
void display()
{
for(t1=first;t1!=NULL;t1=t1->rlink)
{
printf("%d \n",t1->data);
}
}