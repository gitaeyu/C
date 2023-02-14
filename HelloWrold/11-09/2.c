#include <stdio.h>
#include <stdlib.h>

// continue

int numbercompare(int num1, int num2);

int main()
{
  printf("3과 4중에서 큰 수는 %d 이다. \n", numbercompare(3, 4));
  printf("7과 2중에서 큰 수는 %d 이다. \n", numbercompare(7, 2));

  return 0;
}

int numbercompare(int num1, int num2)
{
  if (num1>num2)
  {
    return num1;
  }
  else
  {
    return num2;
  }
}