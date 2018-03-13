#include <stdio.h>
#include <string.h>
int main()
{
     char str[50],tmp;
     int m,n;
     printf("Enter a string:");
     scanf("%s",str);
     for(m=0;m<strlen(str);m=m+2){
     tmp = str[m];
     str[m] = str[m+1];
     str[m+1] = tmp;
     }
     printf("\n The Swapping String is : %s",str);
     return 0;
}
