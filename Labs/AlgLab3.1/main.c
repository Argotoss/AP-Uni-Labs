#include <stdio.h>
#include <math.h>

void main()
{
	float x, y;     //Point coordinates

	printf("Input x, y: ");
	scanf("%f %f", &x, &y);

	if ((fabs(x) <= 1)&&(fabs(y) <= 1))
	{
	    if(x<0)
            printf("Yes");
        else
        {
            if(x*x+y*y<=1)
            {
                printf("Yes");
            }
            else
            {
                printf("No");
            }
        }
	}
	else
    {
        printf("No");
    }
}
