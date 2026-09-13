

#include<stdio.h>
int main()
{
float orignal_value;

printf("enter orignal value:");
scanf("%f", &orignal_value);

//float conversion

int converted_value;
converted_value = (int) orignal_value;

printf("converted value:%d\n",converted_value);

//difference

float difference;
difference = orignal_value-converted_value;

printf("difference value:%f\n",difference);
return 0;
}
