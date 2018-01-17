#include <stdio.h>
#include <string.h>

int OnEnd(char *string, char *text)
{
  int k, i=strlen(text), j=strlen(string);
  int diff=i-j;

  for(k=i-1; k-diff>=0; k--)
  {
	printf("Comparing %c[%d] to %c{%d]\n", text[k],k,string[k-diff],k-diff);
	if(text[k] != string[k-diff])
    		return -1;
  }

  if(text[i-j-1]==' ')
  return 1;
  else
  return -1;
}

int main(){

  char *text = "Lubie placki bez cukru";
  char *string = "bez cukru";

  printf("%d\n",OnEnd(string,text));
return 0;
}
