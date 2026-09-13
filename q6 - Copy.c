
#include<stdio.h>
int main()
{
int a;
int b;

printf("enter a:");
scanf("%d", &a);
printf("enter b:");
scanf("%d", &b);

//type casting
float c = a/b;
float d = (float) a/b;
float e = (float) (a/b);

printf("%f\n",c);
printf("%f\n",d);
printf("%f\n",e);
return 0;
}
