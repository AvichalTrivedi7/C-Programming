#include <stdio.h>
int main()
{
	char str[100];
	int num;
	char sub[50];
	printf("Enter a name: ");
	gets(str);
	printf("Enter your age: ");
	scanf("%d", &num);
	while(getchar()!='\n');
	printf("Enter your subject: ");
	gets(sub);
	printf("You entered the name:%s\n", str);
	puts(str);
	printf("You entered the age:%d\n", num);
	printf("You entered the subject:%s\n", sub);
	return 0;	
}
