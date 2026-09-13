

#include<stdio.h>
#include<math.h>
int main()
{
int a;
int b;
int c;

printf("enter a:");
scanf("%d", &a);
printf("enter b:");
scanf("%d", &b);
printf("enter c:");
scanf("%d", &c);

float x1;
float x2;
float discriminent;

discriminent = b*b-4*a*c;
x1 = (-b+sqrt(discriminent))/(2*a);
x2 = (-b-sqrt(discriminent))/(2*a);

printf("first root:%.2f\n",x1);
printf("second root:%.2f\n",x2);

return 0;
}