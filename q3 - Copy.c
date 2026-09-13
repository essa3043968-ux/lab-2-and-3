
#include<stdio.h>
int main(){

int tax_rate;
int salary;

printf("Tax Rate Is:");
scanf("%d", &tax_rate);
printf("Total Salary Is:");
scanf("%d", &salary);

int tax_amount;
int net_income;
//formula
tax_amount = salary*tax_rate/100;
net_income =  salary-tax_amount;
printf("tax amount is:%d\n",tax_amount);
printf("the net income is:%d\n",net_income);
return 0;
}



