# include <stdio.h>
int main()
{
	int a=25,b=5;
	int result=(a>3)&&(b<6);
	int result1=(a>3)||(b<5);
	printf("a&&b:%d\n",result);
	printf("a||b:%d\n",result1);
	printf("a:%d\n",!a);
	return 0;
}
