#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int i;
int n;

printf("입력 : ");
scanf("%d", &n);

for (i = 1; i < n; i++)
{
  if (n%i==0)
  {
    printf("%d\n", i);
  }
  
}


return 0;

}