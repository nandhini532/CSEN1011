/*ALGORITHM TO FIND MIN AND MAX VALUE OF SHORT DATATYPE USING LIMITS.H
step-1:Start
step-2:print the variables which are related to limits.h header file to find min and max value of short DATATYPE
step-3:Stop*/

#include<stdio.h>
#include<limits.h>
int main()
{
printf("\nsigned short min value: %d",SHRT_MIN);
printf("\nsigned short max value: %d",SHRT_MAX);
printf("\nunsigned short max value: %d",USHRT_MAX);
}

/*Output:
signed short min value: -32768
signed short max value: 32767
unsigned short max value: 65535
Learnings:
1.found different variables related to limits.h headrer file
2.learned to find max and min values of short datatype using limits.h header file*/