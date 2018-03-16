#include<stdio.h>
void main()
{
	char a[10];
	printf("Enter the DAY : ");
	scanf("%s",&a);
	if(a[0]=='s'|| a[0]=='S')
	{
		printf("\n \t HOLIDAY.....!");
	}
	else
	{
		printf("\n \t Not a HOLIDAY.....!");
	}
}
