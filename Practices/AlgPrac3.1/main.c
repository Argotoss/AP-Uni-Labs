#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(0));

    int ans, points = 0, exp = 0, n1, n2;

    printf("Input the results of the following expressions (to stop, input 0): \n\n");

    do
    {
        n1 = rand() % (300) + 300;
        n2 = rand() % (150) + 150;
        printf("%d - %d = ", n1, n2);
        scanf("%d", &ans);
        points += ans == n1 - n2;
        exp++;
    } while (ans != 0);

    printf("\nYour points: %d/%d", points, exp - 1);
}
