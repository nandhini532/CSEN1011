#include <stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b;

    printf("\nEnter value of a: ");
    scanf("%d",&a);
    printf("\nEnter value of b: ");
    scanf("%d",&b);

    printf("Before Swapping a:%d\n",a);
    printf("Before Swapping b:%d\n",b);

    swap(&a,&b);

    printf("\nAfter Swapping a: %d",a);
    printf("\nAfter swapping b: %d",b);

    return 0;
}