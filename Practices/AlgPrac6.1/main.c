#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int numOwners;

    printf("Enter number of owners: ");
	scanf("%d", &numOwners);

	struct Owner
	{
	    char name[20];
    	char address[40];
    	char propType[20];
    	int rooms;
    	float area;
	}   owners[numOwners];

	printf("Input owners data in the following format:\nName Address PropertyType AmountOfRooms Area (avoid using spaces)\n");
	for (int i = 0; i < numOwners; i++)
	{
    	printf("%d) ", i+1);
    	scanf("%s %s %s %d %f", owners[i].name, owners[i].address, owners[i].propType, &owners[i].rooms, &owners[i].area);
	}

	struct TypeAmount
    {
        char propType[20];
        int rate;
    }   tops[numOwners];

    int numUniqueTypes=0;

    for(int i=0; i<numOwners; i++)
    {
        strcpy(tops[i].propType, "");
        tops[i].rate=0;
        for (int j=0; j<numOwners; j++)
        {
            if(strcmp(tops[j].propType, "")==0)
            {
                strcpy(tops[j].propType, owners[i].propType);
                tops[j].rate++;
                numUniqueTypes++;
                break;
            }
            if(strcmp(tops[j].propType, owners[i].propType)==0)
            {
                tops[j].rate++;
                break;
            }
        }
    }

    printf("\n(Task 1)\n");
    for(int i=0; i<numUniqueTypes; i++)
    {
        printf("PropertyType: %s; Amount: %d\n", tops[i].propType, tops[i].rate);
    }

    int maxArea=0;
    for (int i = 0; i < numOwners; i++)
	{
    	if (owners[i].area > maxArea)
    	{
    	    maxArea = owners[i].area;
    	}
	}

	printf("\n(Task 2) Owners of property with the largest area:");
	for (int i = 0; i < numOwners; i++)
	{
    	if (owners[i].area == maxArea)
    	{
    	    printf("\n%s", owners[i].name);
    	}
	}

	char checkType[20];

	printf("\n\n(Task 3) Input property type: ");
	scanf("%s", checkType);
	printf("Owners of property with the given type:");

	for (int i = 0; i < numOwners; i++)
	{
    	if (strcmp(owners[i].propType, checkType)==0)
    	{
    	    printf("\nName: %s Address:%s", owners[i].name, owners[i].address);
    	}
	}
}
