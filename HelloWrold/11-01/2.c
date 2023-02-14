#include <stdio.h>


int main(void)
{
  int a=3, b=5, c;
  int add, mul, sum, m, cm, h, s;
  // printf("\n");
  printf("(예제1)3과 5 덧셈과 곱셈하기\n");
  add=a+b;
  mul=a*b;
  printf("add=%d, mul=%d\n\n", add, mul);

  printf("(예제2)두 수 입력받아 덧셈, 곱셈하기\n");
  scanf("%d %d", &a, &b);
  printf("a+b = %d\n", a+b);
  printf("axb = %d\n\n", a*b);

  printf("(예제3)몫과 나머지 구하기\n");
  scanf("%d %d", &a, &b);
  printf("a/b = %d\n", a/b);
  printf("a%%b = %d\n\n", a%b);

  printf("(예제4)사각형 넓이 구하기\n");
  scanf("%d %d", &a, &b);
  printf("axb = %d\n\n", a*b);

  printf("(예제5)총점과 평균 구하기\n");
  scanf("%d %d %d", &a, &b, &c);
  sum=a+b+c;
  printf("sum = %d\n", sum);
  printf("sum/3 = %d\n\n", sum/3);

  printf("(예제6)센티미터 단위의 길이를 미터와 센티미터로 변환하기\n");
  printf("cm 입력 : ");
  scanf("%d", &cm);
  m=cm/100;
  cm=cm%100;
  printf("%dm %dcm\n\n", m, cm);

  printf("(예제7)초 단위의 시간을 시간, 분, 초로 변환하기\n");
  printf("s 입력 : ");
  scanf("%d", &s);
  h=s/3600;
  s=s%3600;
  m=s/60;
  s=s%60;
  printf("%dh %dm %ds\n\n", h, m, s);


return 0;

}