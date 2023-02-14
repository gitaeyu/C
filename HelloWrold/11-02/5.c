#include<stdio.h>

int main(void)
{

  printf("(문제2) 다음 연산의 결과를 출력하는 프로그램을 작성해보자. 단, *연산자와 /연산자를 사용하지 않고 구현해다 한다.\n 3x8/4=");
  int num1=3;
 
  int result1 = num1<<3;
  int result2 = result1>>2;

  printf("%d \n", result2);


  return 0;
} 