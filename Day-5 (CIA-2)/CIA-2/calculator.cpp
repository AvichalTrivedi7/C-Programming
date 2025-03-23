#include <stdio.h>
int main()
{
	int num1,num2,oper;
	printf("Enter num1:");
	scanf("%d",&num1);
	printf("Enter num2:");
	scanf("%d",&num2);
	printf("Enter the operator \n 1 for '+'' \n 2 for '-' \n 3 for '*' \n 4 for '/':");
	scanf("%d",&oper);
	
	switch(oper)
	{
		case 1:
		printf("The addition will be:%d",num1+num2);
		break;
		
		case 2:
		printf("The subtraction will be:%d",num1-num2);
		break;
		
		case 3:
		printf("The multiplication will be:%d",num1*num2);
		break;
		
		case 4:
		printf("The division will be:%f",num1/num2);
		break;
		
		default:
		printf("You have entered wrong choice, don't enter anything other than 1,2,3,4:");
	}
return 0;	
}
