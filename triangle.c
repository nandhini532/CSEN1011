#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter side of a triangle: ");
  scanf("%d",&a);
  printf("Enter side of a triangle: ");
  scanf("%d",&b);
  printf("Enter side of a triangle: ");
  scanf("%d",&c);
  if(a==b&&b==c)
    printf("Equilateral triangle");
  else if(a==b||b==c||a==c)
    printf("Isosceles triangle");
  else
    printf("Scalene triangle");
  return 0;
}

