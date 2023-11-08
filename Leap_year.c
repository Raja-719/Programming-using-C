#include<stdio.h>
int main(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if (year%400==0){
		printf("Entered year is leap year",year);
	}
	else if (year%100==0){
		printf("Entered year is not a leap year:",year);
	}
	else if(year%4==0){
		printf("Etered year is a leap year",year);
	}
	else{
		printf("This is not a leap year",year);
	}
	return 0;
}