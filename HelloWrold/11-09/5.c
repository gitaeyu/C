#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void recursive(int num)
{
  if (num<=0)
  {
    return;
  }
  printf("recursive call! %d \n", num);
  recursive(num-1);

}

int main()
{
  recursive(3);
  return 0;
}