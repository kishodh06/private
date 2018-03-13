#include<stdio.h>
void main()
{
    char a[10],b[10];
    int i,count=0;
    printf("\n Enter the 1'st' strings: ");
    scanf("%s",a);
    printf("\n Enter the 2'nd' strings: ");
    scanf("%s",b);
    for(i=0;i<strlen(a)&&strlen(b);i++)
    {
    if(a[i]!=b[i])
    {
        count++;
    }
}
if(count==1)
{
    printf("\n \t YES");
}
else
{
    printf("\n \t NO");
}
}
