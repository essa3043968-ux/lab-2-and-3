#include<stdio.h>
int main(){

	int hour;
	int distance;
	int avg_speed;
	
	printf("Enter First Number:");
	scanf("%d", &hour);
	printf("Enter Second Number:");
	scanf("%d", &distance);	
	//formula
	avg_speed = distance/hour;
	printf("The Average Speed Is:%d\n",avg_speed);
	return 0;
	}

