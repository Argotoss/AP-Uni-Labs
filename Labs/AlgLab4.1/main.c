#include <stdio.h>

void main()
{
    int tem;

    printf("Input temperature: ");
    scanf("%d", &tem);

    switch ((tem>40) + (tem>20) + (tem>10) + (tem>0))
    {
        case 0: printf("Very cold"); break;
        case 1: printf("Cold"); break;
        case 2: printf("OK"); break;
        case 3: printf("Warm"); break;
        case 4: printf("Hot"); break;
    }
}
