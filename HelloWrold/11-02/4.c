#include<stdio.h>

int main(void)
{

  printf("(문제1) 입력 받은 정수 값의 부호를 바꿔서 출력하는 프로그램을 작성해보자. 예를 들어서 -3이 입력되면 3이 출력되어야 하고, 5가 입력되면 -5가 출력되어야 한다. 단! 반드시 이번 Chapter에서 소개한 비트 연산자를 이용해서 구현해야한다.\n");
  int num1;

  scanf("%d", &num1);  
  int num2 = ~num1+1;

  printf("%d \n", num2);


  return 0;
} 