#include <stdio.h>

int main()
{
	char x='A';
	int a,b,c; 
	scanf("%c %d %d %d",&x,&a,&b,&c);
	printf("%d: ",a);
	for(c>0;c--;)
	{
		printf("%c",x);
	}
	printf(" %d",b);
	
	return 0;
	
 } 
