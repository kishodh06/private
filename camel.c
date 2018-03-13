#include<stdio.h>
#include<string.h>
void main()
{
	char s[30];
	int i,l;
	printf("Enter the String :");
	scanf("%[^\n]s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(i==0)
		{
			s[i]=toupper(s[i]);
		}
		if(s[i]==' ')
		{
			s[i+1]=toupper(s[i+1]);
		}
	}
	printf("\n %s",s);
}
