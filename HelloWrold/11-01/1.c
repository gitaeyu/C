#include <stdio.h>


int main(void)
{

  int num1, num2, num3;
  int a, b, c;
  int result;

// printf("\n");
  printf("(문제1) 프로그램 사용자로부터 두 개의 정수를 입력 받아서 두 수의 뺼셈과 곱셈의 결과를 출력하는 프로그램을 작성\n");
  scanf("%d %d", &num1, &num2);
  printf("%d+%d=%d\n", num1, num2, num1+num2);
  printf("%d-%d=%d\n\n", num1, num2, num1-num2);

  printf("(문제2) 프로그램 사용자로부터 세 개의 정수 num1, num2, num3 순서대로 입력 받은 후에, 다음 연산의 결과를 출력하는 프로그램을 작성해보자.\n");
  printf("숫자 입력1 : ");
  scanf("%d", &num1);
  printf("숫자 입력2 : ");
  scanf("%d", &num2);
  printf("숫자 입력3 : ");
  scanf("%d", &num3);
  printf("%dX%d+%d=%d\n\n", num1, num2, num3, num1*num2+num3);

  printf("(문제3) 하나의 정수를 입력 받아서, 그 수의 제곱의 결과를 출력하는 프로그램을 작성해보자. 예를 들어서 5가 입력 되면 25가 출력되어야 한다.\n");
  printf("숫자 입력 : ");
  scanf("%d", &a);
  printf("결과 : %d\n\n", a*a);

  printf("(문제4) 입력 받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로ㅡ램을 작성해보자. 예를 들어서 7과 2가 입력되면 몫으로 3, 나머지로 1이 출력되어야 한다.\n");
  printf("숫자 입력1 : ");
  scanf("%d", &b);
  printf("숫자 입력2 : ");
  scanf("%d", &c);
  printf("몫 : %d, 나머지 : %d\n\n", b/c, b%c);

  printf("(문제5) 입력 받은 세 개의 정수 num1, num2, num3를 대상으로 다음 연산의 결과를 출력하는 프로그램을 작성해보자.\n");
  printf("3개 정수 입력 : ");
  scanf("%d %d %d", &num1, &num2, &num3);
  result=(num1-num2)*(num2+num3)*(num3%num1);
  printf("결과 : (%d-%d)x(%d+%d)x(%d%%%d) = %d", num1, num2, num2, num3, num3, num1, result);
 
 return 0;

}

