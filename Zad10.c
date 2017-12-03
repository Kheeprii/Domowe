#include <stdio.h>
#include <stdlib.h>

void print_table(int tab[], int n)
{
    int i;

    for (i=0; i<n; ++i)
        printf("%d ", tab[i]);
}

int* return_reverse_table(int tab[], int n)
{
    int i, j=0, *new_tab = malloc(sizeof(int) * n);
/*memory allocation - przypisanie pamieci. zastrzegam sobie tyle bajtow ile wymaga int*/

    for (i=n-1; i>=0; --i)
    {
        new_tab[j]=tab[i];
        ++j;
    }

    return (new_tab);
}

int main()
{
    int tab[] = {7, 3, 2, 9, 3};

    int *new_tab = return_reverse_table(tab, 5);

    //printf("%d...", new_tab[0]);//new_tab[0]);

    print_table(new_tab, 5);


return 0;
}
