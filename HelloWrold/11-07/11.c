#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int i;
int fact=1;

for ( i = 5; i <= 1; i--)
{
  fact=fact*i;
}

printf("%d", fact);

return 0;

}