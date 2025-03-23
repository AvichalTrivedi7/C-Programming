#include<stdio.h>
int main()
{
int totalrows, row, space,symbol;
printf("enter the number of rows\n");
scanf("%d", &totalrows);
for(row =1; row<=totalrows; row++)
{ for(space =1;space<(totalrows-row);space++)
printf(" ");
for(symbol =1;symbol<=((2*row)-1); symbol++)
printf("*");
printf("\n");
}
return 0;  }
