#include<stdio.h>
int main ()
{
	int telugu,hindi,english,maths,science,total,average,percent;
	printf("\nEnter telugu marks:");
	scanf("%d,& telugu");
	printf("\nEnter hindi marks:");
	scanf("%d,& hindi");
	printf("\nEnter english marks:");
	scanf("%d,& english");
	printf("\nEnter maths marks:");
	scanf("%d,& maths");
	printf("\nEnter science marks:");
	scanf("%d,& science");
	total=telugu+hindi+english+maths+science;
	printf("\n Total = %d",total);
	average=telugu+hindi+english+maths+science/5;
	printf("\naverage=%d",average);
	percent=(total/5)*100;
    printf("\n percentage=%d",percent);
}
