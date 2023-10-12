#include <stdio.h>

void main()
{
	double a,b,c;
	double x = 0;

	printf("Enter a:\n");
	scanf("%lf", &a);

	printf("Enter b:\n");
	scanf("%lf", &b);

	printf("Enter c:\n");
	scanf("%lf", &c);

	x = (c-a)/b;
	printf("%.1lf\n", x);
}
