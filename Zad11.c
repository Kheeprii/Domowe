#include <stdio.h>
#include <stdlib.h>

void glue_strings(char string1[], int length1, char string2[], int length2)
{
    char *newString = malloc(sizeof(char) * (length1+length2));

    int i, j;

    for (i=0; i<length1; ++i)
    {
        newString[i] = string1[i];
    }

    j=length1;

    for (i=0; i<length2; ++i)
    {
        newString[j] = string2[i];
        ++j;
    }

    printf("%s + %s = %s\n", string1, string2, newString);

}

int main()
{
    char t1[] = "Ala";
    char t2[] = "Kot";

    glue_strings(t1, 3, t2, 3);


    }

