#include <stdio.h>

int main()
{

	float basic, da, hra, ta, others;
	float pf,it;
	float net_salary;
	
	printf("Enter Basic Salary ($): ");
	scanf("%f",&basic);
	printf("Enter HRA ($): ");
	scanf("%f",&hra);
	printf("Enter TA ($): ");
	scanf("%f",&ta);	
	printf("Enter others ($): ");
	scanf("%f",&others);	
	
	da = (basic*10)/100;
    pf = (basic*12)/100;
	it = (basic*15)/100;
	
	net_salary = basic + da + hra + ta + others - (pf+it);
	
	printf("Net Salary is: $ %.02f\n",net_salary);
	
	return 0;
} 
*/
output	
Enter Basic Salary ($): 600
Enter HRA ($): 50
Enter TA ($): 25
Enter others ($): 500
Net Salary is: $ 1073.00
/*
