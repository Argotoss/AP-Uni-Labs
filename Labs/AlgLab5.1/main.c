#include <stdio.h>
#include <stdbool.h>

void main()
{
    _Bool t = true;
    float x, x_init;

    printf("Input number (0 to end): ");
    scanf("%f", &x);
    x_init = x;

    while (x!=0)
    {
        printf("Input number (0 to end): ");
        scanf("%f", &x);
        if (x>x_init) t = false;
        x_init = x;
    }
    if (t) printf("Descending order");
    else printf("Non-descending order");
}
