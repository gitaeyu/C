#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int prime_number(int a)
{
  int b;
  int i;

  for (i=2; i < a; i++)
  {
    b=a%i;
    if (b==0)
    {
      printf("소수가 아닙니다.\n");
      return 0;
    }
  }
    printf("소수입니다.\n");
  return 0; 
}

int main()
{
  int pn;

  printf("정수를 입력하시오 : ");
  scanf("%d", &pn);
  
  prime_number(pn);

  return 0;

}