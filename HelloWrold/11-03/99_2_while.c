#include <stdio.h>
int main()
{
  // 과제
  int dan=0, a=0, b=5;
  int c=0, d=1;

  while (dan<5)
  {
    while (a<b)
    {
      printf(" ");
      a++;
    }
    while (c<d)
    {
      printf("*");
      c++;
    }
    a=0;

    printf("\n");
    a=0;
    c=0;
    b--;
    d++;
    d++;
    dan++;  
  }
  

  return 0;

}
