#include <stdio.h>
/**
 * main- main entry function
 *
 * description- prints a double variable
 * @j - duble to be printed
 * return - 0
 */
int main(void)
{
	double j = 1.9;

	printf("%lf\n", j);
	printf("%.1f\n", j);
	printf("%.2f\n", j);
	return (0);
}
