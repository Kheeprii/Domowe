#include <stdio.h>
#define SIZE 10

int mini(int *tab)
{
	int i, min = tab[0];

	for(i=0; i<SIZE; i++)
	{
		if(min > tab[i])
			min = tab[i];
	}
return min;
}

int maxi(int *tab)
{
	int i, max = tab[0];

	for(i=0; i<SIZE; i++)
	{
		if(max < tab[i])
			max = tab[i];
	}
return max;
}

int difference(int min, int max)
{
	int wynik;

	wynik = max - min;

return wynik;
}

int main()
{
	int tab[SIZE] = {9, 8, 4, 4, 26, 3, 23, 6, 4, 12};
	int wynik;

	printf("min: %d\n", mini(tab));
	printf("max: %d\n", maxi(tab));
	printf("max - min = %d\n", difference(mini(tab),maxi(tab)));

return 0;
}
