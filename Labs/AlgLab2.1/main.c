#include <stdio.h>
#include <math.h>

void main()
{
    double x, y, z;     //Input variables
    double a, b;         //The main expressions
    double a1, a2;     //Numerator and denominator for expression a

	printf("Input x, y, z: \n");
	scanf("%lf %lf %lf", &x, &y, &z);

	a1 = pow(log(2+abs(cos(z))), 3) + 0.000037*x;
	a2 = 1 + pow(tan(y - M_PI/7) , 2) + 2.05*x;
	a = a1/a2;
	printf("a = ");
	printf("%lf \n", a);

	b = logl(4+fabs(sin(z)))/logl(4) + 8*x;
	printf("b = ");
	printf("%lf", b);
}
