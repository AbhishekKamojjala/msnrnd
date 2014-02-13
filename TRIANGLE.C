#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1,x2,x3,y1,y2,y3,a,b,c;
scanf("%f%f",&x1,&y1);
scanf("%f%f",&x2,&y2);
scanf("%f%f",&x3,&y3);
a=sqrt(abs(x2-x1)*abs(x2-x1)+abs(y2-y1)*abs(y2-y1));//calculation of side
b=sqrt(abs(x3-x2)*abs(x3-x2)+abs(y3-y2)*abs(y3-y2));
c=sqrt(abs(x1-x3)*abs(x1-x3)+abs(y1-y3)*abs(y1-y3));
if(a<b+c||b<a+c||c<a+b)//checks for triangle
{
if((a==b)&&(b==c))
{
printf("equilateral triangle\n");
}
else if((a==b)||(b==c)||(c==a))
{
if((a*a)==(b*b+c*c)||(b*b)==(a*a+c*c)||(c*c)==(a*a+b*b))
{
 printf("right angled triangle\n");

}
else
{
printf("isosceles triangle\n");
}
}
else
{
printf("scalane triangle\n");
}
}
else
{
printf("not triangle");
}
getch();
}





