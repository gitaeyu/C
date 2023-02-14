#include <stdio.h>
int main()
{
  // 과제
 
  int dan;
  int a, b;

  for (dan=1; dan<6; dan++)
  {
    for (b=1; b<dan; b++)
    {
      printf(" ");
    }

    for (a=0; a<11-2*dan; a++)
    {
      printf("*");
    }

    printf("\n");
  
  }
  
    for (dan=1; dan < 6; dan++)
  {
    for (a=0; a<5-(dan); a++)
    {
      printf(" ");
    }
    for (b=0; b < (2*dan-1); b++)
    {
      printf("*");
    }
   printf("\n"); 
  }

  return 0;

}
