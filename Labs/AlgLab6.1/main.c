#include <math.h>
#include <stdio.h>

void main()
{
    float n, a, s=0;
    int x, i=1;

    printf("Input x: ");
    scanf("%d", &x);
    printf("Input a: ");
    scanf("%f", &a);
    printf("\n");

    if(a<=0.0002 || a>1./(1+x))
    {
        printf("Wrong input");
    }
    else
    {
        n = 1./(x+i);
        while(n>=a)
        {
            printf("%d      %.5f \n", i, n);
            s+=n;
            i++;
            n = 1./(x+i);
        }
        printf("\nSum = %.5f\n", s);
        printf("\nThe first ni < a:\n%d     %.5f\n", i, n);
    }

    float e, nn;

    printf("\nInput e: ");
    scanf("%f", &e);

    i = 1;

    if(e<0.01 || e>0.03)
    {
        printf("Wrong input");
    }
    else
    {
        n = 1./(x+i);
        i++;
        nn = 1./(x+i);
        while(fabs(n-nn)>=e)
        {
            printf("\n%d      %.3f", i, fabs(n-nn));
            i++;
            n = nn;
            nn = 1./(x+i);
        }

        printf("\n\nThe first ni < a:\n%d     %.5f\n", i, fabs(n-nn));
    }
}
