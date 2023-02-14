#include <stdio.h>
int main()
{
  // 과제
  int dan=1, a=0, b=0;
  int c=1, d=9;

  while (dan<6)
  {

    while (a<(11-2*dan))
    {
      printf("*");
      a++;
    }
    
    printf("\n");

    while (b<c)
    {
    printf(" ");
    b++;
    }

    a=0;
    b=0;
    c++;
    dan++;

  }
  

  return 0;

}
