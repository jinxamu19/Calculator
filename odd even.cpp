#include <stdio.h>
int main()
{         //whether a number is odd or even
	int A,B;
	printf("enter number to check whether it is odd or even\n");
	scanf("%d",&A);
	B=A%2;
	if (B==0)
	printf("the number %d is even. \n", A);
	else
	printf("the number %d is odd. \n ", A);
	return 0;

}
