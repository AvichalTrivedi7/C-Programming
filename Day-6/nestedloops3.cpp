#include <stdio.h>
int main()
{
	int i,j,rows,space;
	printf("Enter number of rows to be printed :");
	scanf("%d",&rows);
	for(i=1;i<=rows;++i)
	{
		for(space=1;space<(rows-i);space++)
		{
			printf(" ");
			for(j=1;j<=rows*2-1;j++)
			{
			     printf("*");
		}
			}
		{
			
	printf("\n");
}}}
