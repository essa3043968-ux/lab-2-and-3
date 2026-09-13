
#include<stdio.h>
int main()
{
int sub1;
int sub2;
int sub3;

printf("enter ubject 1:");
scanf("%d", &sub1);
printf("enter subjectb 2:");
scanf("%d", &sub2);
printf("enter subject 3:");
scanf("%d", &sub3);

int total_marks;
float avg;
//formulas
total_marks = sub1+sub2+sub3;
avg =(float )(total_marks/3);
				
printf("total marks is:%d\n",total_marks);
printf("the avg is:%f\n",avg);
return 0;
}					
