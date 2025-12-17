#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
	
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("factorial value of %d : %d", x,factorial(x));
	return 0;
}
