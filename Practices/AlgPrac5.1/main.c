#include <stdio.h>

void main()
{
    int size;

    printf("Input matrix size: ");
    scanf("%d", &size);

    printf("\nInput matrix elements:\n");
    int mat[size][size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int isec = size - 1;
    for(int i=0; i<size; i++)
    {
        int _ = mat[i][i];
        mat[i][i] = mat[i][isec];
    	mat[i][isec] = _;
    	isec--;
    }

    printf("\n(Task 1) Matrix with swapped diagonals:\n");
    for(int i=0; i<size; i++)
    {
        printf("\n");
        for(int j=0; j<size; j++)
        {
            printf("%d ", mat[i][j]);
        }
    }

    int minrow=999999, iminrow;

    for(int i=0; i<size; i++)
    {
        int sum = 0;
        for(int j=0; j<size; j++)
        {
            sum += mat[i][j];
        }
        if(sum < minrow)
        {
            minrow = sum;
            iminrow = i;
        }
    }

    printf("\n\n(Task 2) Row index with minumum sum: %d (sum = %d)\n", iminrow+1, minrow);

    for(int j=0; j<size; j++)
    {
        int maxcol = 0;
        for(int i=0; i<size; i++)
        {
            if(mat[i][j] > maxcol)
            {
                maxcol = mat[i][j];
            }
        }
        for(int i=0; i<size; i++)
        {
            if(mat[i][j] == maxcol)
            {
                mat[i][j] = 0;
            }
        }
    }

    printf("\n(Task 3) Matrix with replaced maximums:");
    for(int i=0; i<size; i++)
    {
        printf("\n");
        for(int j=0; j<size; j++)
        {
            printf("%d ", mat[i][j]);
        }
    }
}
