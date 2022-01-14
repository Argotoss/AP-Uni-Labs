#include <stdio.h>

void main()
{
    int count;

    for (int i=100; i<1000; i++)
    {
        if (i/100 + i%10 == (i%100)/10) count++;
    }
    printf("%d", count);
}
