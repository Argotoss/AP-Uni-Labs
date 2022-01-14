#include <stdio.h>

int main()
{
    int n, m, k1, k2;
    int count=0;

    printf("Input n, m: ");
    scanf("%d %d", &n, &m);

    float a[n][m];

    printf("Input matrix values: \n");

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            scanf("%f", &a[i][j]);
            if(a[i][j]>i+j) count++;
        }
    }

    printf("Amount of elements a[i][j] > i + j: %d\n", count);

    printf("Input k1, k2: ");
    scanf("%d %d", &k1, &k2);
    float _;

    for (int i=0; i<n; i++)
    {
        _ = a[i][k1];
        a[i][k1] = a[i][k2];
        a[i][k2] = _;
    }

    for (int i=0; i<n; i++)
    {
        printf("\n");
        for (int j=0; j<m; j++)
        {
            printf("%.2f ", a[i][j]);
        }
    }
}
