#include<stdio.h>

int main(void)
{
  printf("(����2) ���α׷� ����ڷκ��� �� ���� �Ǽ��� �Է� �޾Ƽ� double�� ������ �����ϴ�. �׸��� �� ���� ��Ģ���� ����� ����غ���.\n");

  double a, b;

  scanf("%lf %lf", &a, &b);

  printf("%f+%f = %f\n", a, b, a+b);
  printf("%f-%f = %f\n", a, b, a-b);
  printf("%f*%f = %f\n", a, b, a*b);
  printf("%f/%f = %f\n", a, b, a/b);


  return 0;
} 