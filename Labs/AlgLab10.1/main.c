#include <stdio.h>
#include <string.h>
void main()
{
    struct Record
    {
        char name[20];
        int orderDay, orderMonth, orderYear;
        int foundDay, foundMonth, foundYear;
    };

    int recAmount, min=9999;

    printf("Input amount of records: ");
    scanf("%d", &recAmount);

    struct Record records[recAmount];

    for(int i=0; i<recAmount; i++)
    {
        scanf("%s %d %d %d %d %d %d", records[i].name, &records[i].orderDay, &records[i].orderMonth, &records[i].orderYear, &records[i].foundDay, &records[i].foundMonth, &records[i].foundYear);
        int dif = records[i].foundDay + records[i].foundMonth*30 + records[i].foundYear*365 - records[i].orderDay - records[i].orderMonth*30 - records[i].orderYear*365;
        if(dif<min) min=dif;
    }
    printf("The lowest amount of days a book has been found: %d\n", min);

    struct Top
    {
        char name[20];
        int rate;
    };

    struct Top tops[recAmount];

    for(int i=0; i<recAmount; i++)
    {
        strcpy(tops[i].name, "");
        tops[i].rate=0;
        for (int j=0; j<recAmount; j++)
        {
            if(strcmp(tops[j].name, "")==0)
            {
                strcpy(tops[j].name, records[i].name);
                tops[j].rate += 1;
                break;
            }
            if(strcmp(tops[j].name, records[i].name)==0)
            {
                tops[j].rate += 1;
                break;
            }
        }
    }

    int toprate=0;
    char itoprate[20];

    for(int i=0; i<recAmount; i++)
    {
        if(tops[i].rate>toprate)
        {
            toprate=tops[i].rate;
            strcpy(itoprate, tops[i].name);
        }
    }
    printf("The top borrower of books: %s", itoprate);
}
