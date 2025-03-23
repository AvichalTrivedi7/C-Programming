#include <stdio.h>
int main() 
{
	int i=0,a=0,b=0,c=0,x,x1,x2,x3;
	x=i++; x1=a--; x2=++b; x3=--c;
	printf("%d%d%d%d\n",x,x1,x2,x3);
	printf("%d%d%d%d",i,a,b,c);
}
//This didn't work with loops because you're using the same variable in loops, and when using the same variable the increment happens immediately
//But if you store that value using another variable then it will pre/post increment, depending on which type of increment you're using

	
