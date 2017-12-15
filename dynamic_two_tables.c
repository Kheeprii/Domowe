#include <stdio.h>
#include <stdlib.h>

int max(int x, int y, int *min)
{
    if(x>=y)
    {
	*min = y;
        return x;
    }
    else
    {
	*min = x;
        return y;
    }

}

int main(void){
  int **mytab;
  int n,k,x,y;
  int min, maxi;

  do
  {printf("Podaj rozmiar macierzy: \n");
  scanf("%d %d", &x, &y);

  }while(x <= 0 || y <= 0);

  maxi = max(x, y, &min);

  mytab = (int**)malloc(x * sizeof(int*));
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }
  for (n=0; n<x; n++){
    mytab[n] = (int*)malloc(y * sizeof(int));
    if(mytab[n] == NULL){
      perror("Error in malloc2");
      exit (1);
    }
  }

  for (n=0; n<x; n++){
    for (k=0; k<y; k++){
      printf("%d  ",(rand()%(maxi-min+1)+min));
    }
    putchar('\n');
  }

  for (n=0; n<x; n++){
      free(mytab[n]);
  }
  free(mytab);
  putchar('\n');
  return EXIT_SUCCESS;
}
