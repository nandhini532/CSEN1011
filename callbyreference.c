// call by reference using swap function
#include<stdio.h>
int swap(int *x, int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  printf("After swapping %d %d",*x,*y);
}
int main()
{
  
  int a,b;
  printf("Before swapping %d %d",a,b);
  printf("\n");
  swap(&a,&b);
}
/*
Output:
Before swapping 156789 4567
After swapping -4567 156789
*/

