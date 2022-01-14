#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare_words(char* n0, char* n1, char* n2)
{
    int len = (n1 - n0);
    if (len > n2 - n1) len = n2 - n1;

    int t=1;

    for(int i=0; i<len; i++)
    {
        if(*(n0+i+1)<*(n1+i+1))
        {
            t=1;
            break;
        }
        if(*(n0+i+1)>*(n1+i+1))
        {
            t=0;
            break;
        }

    }

    return t;
}

void main()
{
    char text[80], textcopy[80];
    int isalf = 1, maxlen;

    printf("Input text (not longer than 80 symbols): ");
    fgets(text, 80, stdin);
    strcpy(textcopy, text);
    strlwr(textcopy);

    char* n0=textcopy-1;
    char* n1=strchr(textcopy, ' ');
    char* n2=strchr(n1+1, ' ');
    maxlen = n1-n0;
    while(n2!=0)
    {
        if(n2-n1>maxlen) maxlen = n2-n1;
        isalf *= compare_words(n0, n1, n2);
        n0=n1;
        n1=n2;
        n2=strchr(n1+1, ' ');
    }
    n2 = strchr(textcopy, 0)-1;
    isalf *= compare_words(n0, n1, n2);
    printf("(Task A) ");
    if(isalf) printf("The words are placed in lexicographical order");
    else printf("The words are not placed in lexicographical order");

    for(int i=0; i<80; i++)
    {
        if(text[i]=='A') text[i]='a';
    }
    printf("\n(Task B) %s", text);
    printf("(Task C) The longest word: %d symbols", maxlen-1);
}
