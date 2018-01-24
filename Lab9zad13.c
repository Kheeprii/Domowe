#include <stdio.h>
#include <stdlib.h>

int licz(char const *wyraz)
{
  int i = 0;

  while ( *wyraz++ )
	++i;

  return i;
}

int main(int argc, char const *argv[]) {

  int count;

 if(argc > 0)
  {
    for(count = 1; count < argc; count++)
    {
	printf("%d\n",licz(argv[count]));
    }

 } else{
    printf("something goes wrong! \n");
       }
  return EXIT_SUCCESS;
}

