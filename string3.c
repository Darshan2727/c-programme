#include<stdio.h>
int main()
{
	char a[20],b[20];
	int i,j;
	printf("enter first string:");
	gets(a);
	printf("enter second string:");
	gets(b);
	for(i=0;a[i]!='\0';i++);
	
		for(j=0;b[j]!='\0';j++)
		{
			a[i]=b[j];
			i++;
		}
	a[i]='\0';
	printf("final answer: %s",a);
}