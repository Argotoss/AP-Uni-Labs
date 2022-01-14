#include <stdio.h>
#include <math.h>

void main()
{
    float x, s=0, sp;

    printf("Input x: ");
    scanf("%f", &x);

    for (int i=1; i<=9; i++)
    {
        sp = 1;
        for (int n=i; n<=17; n++)
        {
            if(n!=12 && n!=2)   sp *= (n*n*n - 8)/(n - 12);
        }
        if(i!=3)    s += (pow(fabs(7-x), i))/(pow(i-3, 5)) * sp;
    }
    printf("Sum: %f", s);
}
