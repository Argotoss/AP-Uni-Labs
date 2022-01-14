#include <math.h>
#include <stdio.h>

void main()
{
    printf("To answer following questions, type the number (1-3) \nDon't write any text, only numbers! \n\n");

    unsigned points = 0;
    points += ask_ques("Which of the following cities is the capital of Great Britain", "Rome", "London", "Oslo", 2);
    points += ask_ques("Which of the following cities is the capital of Poland", "Warsaw", "Paris", "Washington", 1);
    points += ask_ques("Which of the following cities is the capital of Japan", "Beijing", "Seoul", "Tokyo", 3);
    points += ask_ques("Which of the following mountains is the highest in the world", "Himalayas", "Elbrus", "Jomolungma", 3);
    points += ask_ques("Where from the following countries has The Statue of Liberty been built", "Germany", "France", "Italy", 2);

    printf("\nYour points: %d/5 \n", points);
}

int ask_ques(char* ques, char* ans1, char* ans2, char* ans3, unsigned real_ans)
{
    printf("%s?\n", ques);
    printf("1. %s\n", ans1);
    printf("2. %s\n", ans2);
    printf("3. %s\n\n", ans3);
    unsigned ans;

    int inp = scanf("%d", &ans);
    printf("\n");

    return ans == real_ans;
}
