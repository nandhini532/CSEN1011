
/*ALGORITHM TO FIND TOTAL,AVERAGE,PERCENTAGE OF 5 SUBJECT MARKS
Step-1:Start
Step-2:Enter the marks of telugu,hindi,english,maths,physics
Step-3:Calculate sum of all subjects total=telugu+hindi+english+maths+physics
Step-4:Divide sum of all subjects by total number of subjects average=total/5
Step-5:Calculate percentage using percentage=(total/500)*100
Step-5:Finally print values of total,average,percentage
Step-6:Stop */



#include<stdio.h>
int main()
{
	int tel,hin,eng,mat,phy;
	float tot,avg,per;
	printf("\nEnter telugu marks: ");
	scanf("%d",&tel);
	printf("\nEnter hindi marks: ");
	scanf("%d",&hin);
	printf("\nEnter english marks: ");
	scanf("%d",&eng);
	printf("\nEnter maths marks: ");
	scanf("%d",&mat);
	printf("\nEnter physics marks: ");
	scanf("%d",&phy);
	tot=tel+hin+eng+mat+phy;
	avg=tot/5;
	per=(tot/500)*100;
	printf("\nTotal marks:%f",tot);
	printf("\nAverage:%f",avg);
	printf("\nPercentage:%f",per);
}
/* Output
Enter marks_01 : 23
Enter marks_02 : 89
Enter marks_03 : 12
Enter marks_04 : 67
Enter marks_05 : 45
Total Marks scored = 236
Average Marks scored = 47
Learnings
01. Do we need to declare all variables having a similar functionallity?  Arrays is a better way.
*/

