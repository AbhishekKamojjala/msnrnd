#include<stdio.h>
#include<conio.h>
int n;
struct node
{
int data;
struct node *link;
};
struct node *temp=NULL;
void push(int rm,int dig);
void *malloc(size_t size);
void display();
void main()
{
int n1,rem;
printf("enter a number");
scanf("%d",&n);
n1=n;
while(n1>0)//extracts a digit from number
{
rem=n1%10;
push(rem,n1);//pushes digit to linked list starting from unit's digit
n1=n1/10;
}
display();
}
void push(int rm,int dig)
{
struct node *r=(struct node*)malloc(sizeof(struct node));
if(dig==n)
{
r->data=rm;
r->link=NULL;
}
else
{
r->data=rm;
r->link=temp;
}
temp=r;
}
void display()//displays all elements in it
{
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->link;
}
}
