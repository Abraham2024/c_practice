#include <stdio.h>

/**
 * main- main entry point
 *
 * description - prints the value of operators
 *
 * return - 0
 */
int main(void)
{
	int a = 100, b =12, c;

	c = a+b;
	printf("the sum is %i\n", c);
		c = a-b;
		printf("the difference is %i\n", c);
		c= a*b;
			printf("the product is %i\n", c);
			c= a/b;
				printf("the divisor is %d\n", c);
			c = a%b;
			printf("the remainder is %d\n", c);
			return(0);
}

