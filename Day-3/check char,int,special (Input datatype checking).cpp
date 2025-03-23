#include <stdio.h>
int main()
{
	int x=1;
	while(x)
	{
		char s;
		printf("Enter a random char: ");
		s=getchar();
		if((s>='a'&&s<='z')||(s>='A'&&s<='Z'))
		{
			printf("Char entered is a alphabet.\n");
		}
		
		if(s>='0'&&s<='9')
		{
			printf("Char entered is an integer.\n");
		}
		
		else
		{
			printf("Char is a special character.\n");
		}
			
		printf("Do you want to continue checking character type? \n 1 for yes \n Any key for no\n");
		scanf(" %d",&x);	
	}
return 0;
}
