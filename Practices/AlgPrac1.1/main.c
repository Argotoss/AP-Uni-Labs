#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c;  //Sides of the triangle
    float s;    //Area of the triangle

    printf("Input triangle sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
    {
        if(a==b || a==c || b==c)
        {
            if(a==b && a==c)
            {
                printf("Triangle is equilateral \n");
            }
            else
            {
                printf("Triangle is isosceles \n");
            }
        }
        else
        {
            printf("Triangle is arbitrary \n");
        }
        s = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
        printf("Area equals %.3f", s);
    }
    else
    {
        printf("Triangle does not exist");
    }
}
