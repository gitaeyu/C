#include<stdio.h>

int main()
{
  int num;
  
  printf("n   n의 제곱\n");
  for (num = 1; num <= 5; num++)        // (초기화; 조건식 ; 증감식)
  {
    printf("%d %7d\n", num, num*num);
  }
  

  return 0;
}