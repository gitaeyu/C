#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int i;
int n1, n2;

printf("입력 : ");
scanf("%d %d", &n1, &n2);

  for (i = 1; i <= n1; i++)
  {
    if (n1%i==0 && n2%i==0)
    {
      printf("%d\n", i);
    }
  
  }
  
return 0;

}