#include <stdio.h>
int main()
{
	int num,sum;
	printf("Enter 0 whenever you want to stop adding\n");
	while (num!=0)
	{
		printf("Enter the num:\n");
		scanf("%d",&num);
		sum+=num;
		printf("This is the sum until now:%d\n",sum);
	}
	return 0;
}
