#include <stdio.h>
int i=4;
int main()
{
i++;
void func();
printf("Value of i =%d- Global variable\n",i);
return 0; 
}
void func()
{
	int i=10;
	i++;
	printf("Value of a = %d-Local Variable\n",i);
}
