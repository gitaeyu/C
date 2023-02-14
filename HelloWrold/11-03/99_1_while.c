#include <stdio.h>
int main()
{
  // 과제
  int dan=0, a=0, b=5;

  while (dan<5)
  {
    while (a<b)
    {
      printf("*");
      a++;
    }
    printf("\n");
    a=0;
    b--;
    dan++;  
  }
  

  return 0;

}
