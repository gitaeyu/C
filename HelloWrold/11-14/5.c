#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
  char str[50]="I like C programming";
  printf("string : %s \n", str);

  str[8]='/0';
  printf("string : %s \n", str);

  str[6]='\0';
  printf("string : %s \n", str);

  str[1]='\0';
  printf("string : %s \n", str);

  return 0;


}
