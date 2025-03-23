#include <stdio.h>
int main()
{
	int i=0,table,a;
	printf("Please enter the table you want as output:\n");
	scanf("%d",&table);
	while(i<11)
	{
		printf("%d",table);
		printf("x");
		printf("%d",i);
		printf("=");
		a=table*i;
		printf("%d\n",a);
		i++;
	}
	return 0;
}
