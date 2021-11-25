#include<stdio.h>
int main()
{
	int p,t,r,si,ci;
	p=100,t=2,r=12;
	si=p*t*r/100;
	printf("simple interest:%d\n",si);
	ci=p*(1+r/100)*t-1;
	printf("compound interest:%d\n",ci);
}
