#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int i;
int sum=0;

  for ( i = 2 ; i <= 100; i+=2)
  {
    // printf("%d\n", i);
    sum=sum+i;
  }
  
  printf("%d", sum);

return 0;

}