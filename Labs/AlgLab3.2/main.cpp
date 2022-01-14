#include <stdio.h>
#include <math.h>

void main()
{
    float x;    //Expression argument
    float a;    //Parameter
    float y;    //Expression value

    printf("a = ");
    scanf("%f", &a);
    printf("x = ");
    scanf("%f", &x);

    if(x == 12 && a == 0)
    {
        printf("Wrong input");
        exit(0);
    }

    if (x + a > 12)
    {
        y = x*4;
    }
    else
    {
        if (x + a == 12)
        {
            y = (float)x/a;
        }
        else
        {
            y = a;
        }
    }
    printf("|x|y| : |%.3f|%.3f|", x, y);
}
