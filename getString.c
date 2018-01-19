#include <stdio.h>
#include <stdlib.h>

#define TAB_SIZE 4

void getString(char *wsk)
{
    char static_table[TAB_SIZE];

    char character_input; //tu bedzie wpisywany znak z klawiatury

    int i = 0;

    printf("Ilosc znakow do wpisania: %d\n", TAB_SIZE);

    while ( i < TAB_SIZE )
    {
        character_input = getchar(); //getchar po wcisnieciu enter pobiera znak nowej linii

        if( character_input != '\n' ) //jezeli nie jest znakiem nowej linii
        {
            static_table[i] = character_input; //do tablicy statycznej wpisywany jest znak wczytywany z klawaitury.
            *(wsk+i) = static_table[i]; //ten znak jest wpisywany z tej tablicy statycznej do wskaznika pod wskazany adres.
            //
            ++i;
        }
    }

    printf("Zawartosc table:\n");

    for (i=0; i<TAB_SIZE; ++i)
        printf("%c ", *(wsk+i));
}

void getStringN(char *table, int n)
{
    table = malloc(sizeof(char)*n);

    char character_input;

    int i = 0;

    printf("Ilosc znakow do wpisania: %d\n", n);

    while ( i < n )
    {
        character_input = getchar();

        if( character_input != '\n' )
        {
            *(table+i) = character_input;
            ++i;
        }
    }

    printf("Zawartosc table:\n");

    for (i=0; i<n; ++i)
        printf("%c ", *(table+i));
}

void getStringR(char *table)
{
    char static_table[TAB_SIZE];

    char character_input;

    int i = 0;

    printf("Ilosc znakow do wpisania: %d\n", TAB_SIZE);

    while ( i < TAB_SIZE )
    {
        character_input = getchar();

        if( character_input != '\n' )
        {
            static_table[i] = character_input;

            table = realloc(table, sizeof(char)*(i+1)); //zwraca adres (potrzebuje wskaznik i rozmiar), przydziela rozmiar wskaznikowi
            *(table+i) = static_table[i];
            ++i;
        }
    }

    printf("Zawartosc table:\n");

    for (i=0; i<TAB_SIZE; ++i)
        printf("%c ", *(table+i));
}
int main()
{
    char *table = malloc(sizeof(char)*TAB_SIZE); //malloc przydziela ilosc pamieci ktora wyrzuca sizeof(char)*TAB_SIZE
        //przypisanie pewnego obszaru w pamieci, malloc zwraca adres do miejsca ktory przydzielil.
        //sizeof zwraca rozmiar potrzebny na ulokowanie zmiennej danego typu.
        //sizeof(char) - char ma tyle bajtow.
    char *tableN = NULL;
    char *tableR = NULL;

    //Zad. 12
    getString(table);

    //Zad. 13
    //getStringN(tableN, TAB_SIZE);

    //Zad 14.
    //getStringR(tableR);

	printf("\n");

    return 0;
}

