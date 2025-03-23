#include <stdio.h>
int main()
{
	int i=0,table,a;
	printf("Please enter the table you want as output:\n");
	scanf("%d",&table);
	while(i<11)
	{
	a=table*i;
	printf("%dx%d=%d\n",table,i,a);
	i++;
	}
	return 0;
}
