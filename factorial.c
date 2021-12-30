/*ALGORITHM TO FIND FACTORIAL OF A NUMBER
step-1:Start
step-2:Enter a number
step-3:If number is less than 0 then print Negative Number
step-4:If number is greater than 10 then print Too big a number
step-5:fact*=i
step-6:print the factorial of the number
step-7:Stop */

#include <stdio.h>
int main() 
{
    int n,i;
    unsigned long fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
        printf("Negative Number");
    else if(n>10)  
        printf("Too big a number");
    else {
        for (i=1; i<=n;++i) {
            fact*=i;
        }
        printf("Factorial of %d = %lu", n, fact);
    }

    return 0;
}

/*output:
Enter a number:2
Factorial of 2=2
Enter a number:15
Too big a number
Enter a number:-7
Negative Number
Learnings:
learned to find the factorial of positive number less than 10*/
