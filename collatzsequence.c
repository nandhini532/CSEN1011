/*ALGORITHM TO FIND THE COLLATZ SEQUENCE
step-1:Start
step-2:enter the value of an integer
step-3:print the integer n
step-4:if n is even ,n=n/2
step-5:if n is odd ,n=3*n+1
step-6:repeat step 4 and 5 until n reaches 1
step-6:stop*/

#include<stdio.h>
int main()
{
int n;
  printf("\nEnter an integer: ");
  scanf("%d",&n);
  while(n>1){
  
  if(n%2==0)
    {
      n=n/2;
    printf("%d\n",n);
    }
  else
  {
  n=3*n+1;
  printf("%d\n",n);
  }
  }
return 0;
}

/*Output:
Entere an integer: 23
70
35
106
53
160
80
40
20
10
5
16
8
4
2
1
Learnings:
1.leraned what is meant by collatz sequence
2.leraned to find collatz sequence of a positive number*/
