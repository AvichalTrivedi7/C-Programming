#include <stdio.h>
int main()
{
	int shiptype,weigh,dist,calc,price,calc1,price1;
	printf("***Welcome to the postal department***\n");
	printf("Please enter shipment type: \n 1 for letter \n 2 for parcel \n");
	scanf("%d",&shiptype);
	if (shiptype==1)
	{
		printf("Letter is charged rupees 5\n");
	}
	if (shiptype==2)
	{
		printf("Please enter weight of the parcel in gms\n");
		scanf("%d",&weigh);
		printf("Please enter distance parcel has to travel in kms\n");
		scanf("%d",&dist);
		if (weigh<=50)
		{
			printf("Your parcel is charged rupees 100 only\n");
		}
		else 
		{
			printf("**Your parcel will be charged rupees 10 for every extra gm over 50**\n");
			calc=weigh-50;
			price=calc*10;
			printf("The extra charges (weigh) will be:%d\n",price);
		}
		if (dist<=100)
		{
			printf("**Your parcel will have no extra charges for distance**\n");
		}
		else
		{
			printf("**Your parcel will be charged 1Rupees/km**\n");
			calc1=dist-100;
			price1=calc1;
			printf("The extra charges (dist) will be:%d\n",price1);
		}
	}
	printf("The total extra charges will be:%d\n",price+price1);
	
return 0;
}
