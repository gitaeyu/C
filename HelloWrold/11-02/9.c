#include<stdio.h>

int main(void)
{
  printf("(문제2) 프로그램 사용자로부터 두 개의 실수를 입력 받아서 double형 변수에 저장하다. 그리고 두 수의 사칙연산 결과를 출력해보자.\n");

  double a, b;

  scanf("%lf %lf", &a, &b);

  printf("%f+%f = %f\n", a, b, a+b);
  printf("%f-%f = %f\n", a, b, a-b);
  printf("%f*%f = %f\n", a, b, a*b);
  printf("%f/%f = %f\n", a, b, a/b);


  return 0;
} 