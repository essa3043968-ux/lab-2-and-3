
#include<stdio.h>
int main()
{
int pennies = 368;
//convert pennies into qurters,dime,nickel

int quarter;
int dime;
int nickel;

//Given

quarter = pennies/25;
pennies = pennies%25;
dime = pennies/10;
pennies = pennies%10;
nickel = pennies/5;
pennies = pennies%5;

printf("Quarter:%d\n",quarter);
printf("Dime:%d\n",dime);
printf("Nickel:%d\n",nickel);
printf("Pennies:%d",pennies);
return 0;
}