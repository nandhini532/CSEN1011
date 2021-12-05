/*ALGORITHM TO FIND SIMPLE INTEREST
Step-1:Start
Step-2:Declare variables p,t,r
Step-3:Read the values of variable p(principle),t(time period),r(rate of interest)
Step-4:Calculte the value of simple interest=p*t*r/100
Step-5:Display simple interest
Step-6:Stop */



# include <stdio.h>
int main() {
  int p, t, r;
  
  printf("Principle = " );
  scanf("%d", &p);

  printf("Rate of Interest = " );
  scanf("%d", &r);

  printf("Time period = " );
  scanf("%d", &t);

  printf("Simple Interest = %d \n", (p * t * r / 100) );

  return 0;
}


/*Learnings
1.Learned to find simple interest using the formula of simple interest */
