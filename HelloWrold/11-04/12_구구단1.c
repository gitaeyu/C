#include <stdio.h>

// 문제 8-2

int main()
{
  int a;
  int dan;


    for(dan=2; dan<10; dan+=2)
    {

      for(a=1; a<10; a++)
      {

        printf("%d * %d = %d\n", dan, a, dan*a);

        if (a==dan)
        {
          break;
        }
      }
      
    }
    
    

  return 0;
}