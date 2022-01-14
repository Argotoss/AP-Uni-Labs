#include <stdio.h>
int main()
{
    	float a;
 	float h;
    	float V;
	printf("Input a\n");
	scanf("%f", &a);
	printf("Input h\n");
	scanf("%f", &h);
	V = a * a * h / 3;
	printf("%.2f", V);
	return 0;
}
