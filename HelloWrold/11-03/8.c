#include <stdio.h>
int main()
{
  // 7-3 while문과 do~while문에 익숙해지기

  printf("(문제2) 0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램을 구현하되, do~while문 기반으로 재 구현해 보자. 참고로 덧셈의 결과는 2550이 되어야 한다.\n");

  int a=0, sum=0;

  printf("0이상 100이하의 정수 중에서 짝수의 합\n");

  while (a<=100)
  {
    sum=a+sum;
    a++;
    a++;
  }
  
  printf("%d", sum);

  return 0;

}
