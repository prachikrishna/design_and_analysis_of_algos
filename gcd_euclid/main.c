#include <stdio.h>
#include <stdlib.h>

int euclid(int a, int b)
{
	int q, r;

	// loop till remainder is 0
	while (b > 0)
	{
		q = a / b;		// quotient
		r = a - q * b;	// remainder

		// or we can simply use (a % b) to calculate r

		// a becomes b and b becomes r (a % b)
		a = b;
		b = r;
	}

	return a;
}

// main function
int main()
{
	int a = 31415;
	int b = 14142;

	printf("euclid(%d, %d) = %d", a, b, euclid(a, b));

	return 0;
}
