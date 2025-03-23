#include <stdio.h>
int main()
{
	int i,j,rows;
	printf("Enter number of rows to be printed :");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
	{
		for(j=1;j<=rows-i+1;j++)
		{
			printf("*");
		}
	printf("\n");}
}
