#include <stdio.h>
#include<conio.h>
int main()
{
    int num;
    char choice;
    do
{
  printf("Enter an integer number :");
  scanf("%d",&num);
  if(num==0)      
  printf("Number is ZERO:");
  else if(num>0)   
  printf("Number is POSITIVE:");
  else          
  printf("Number is NEGATIVE:");
  printf("\n\n Want to check again (press Y/y for 'yes') :");
  fflush(stdin);      
  scanf(" %c",&choice);
}
  while(choice=='Y' || choice=='y');
  printf("\n Bye Bye!!!");
  return 0;
}
