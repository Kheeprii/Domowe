#include <stdio.h>

int main()
{
	int n, m;

	printf("Podaj wartosc n: ");
	scanf("%d", &n);

	printf("Podaj wartosc m: ");
	scanf("%d", &m);

	int i, j, tab[n][m];

	for (i=0; i<n; ++i)
	{
		for (j=0; j<m; ++j)
		{
			printf("Podaj wartosc tab[%d][%d]: ", i, j);
			scanf("%d", &tab[i][j]);
		}
	}

	for (i=0; i<n; ++i)
	{
		for (j=0; j<m; ++j)
		{
			printf("%d ", tab[i][j]);
		}

		printf("\n");
	}

	return 0; 

}
