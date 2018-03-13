#include<stdio.h>
int main()
{
int numbr,k,remark,l,r,count=0;
printf("\n Enter the initial value:");
scanf("%d",&l);
printf("\n Enter the end value: ");
scanf("%d",&r);
for(numbr=l;numbr<=r;++numbr)
{
remark=0;
for(k=2;k<=numbr/2;k++){
if((numbr % k) == 0){
remark++;
break;
}
}
if(remark==0)
count++;
}
printf(" \n The Answer is : %d",count);
return 0;
}
