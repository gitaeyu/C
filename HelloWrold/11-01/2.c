#include <stdio.h>


int main(void)
{
  int a=3, b=5, c;
  int add, mul, sum, m, cm, h, s;
  // printf("\n");
  printf("(����1)3�� 5 ������ �����ϱ�\n");
  add=a+b;
  mul=a*b;
  printf("add=%d, mul=%d\n\n", add, mul);

  printf("(����2)�� �� �Է¹޾� ����, �����ϱ�\n");
  scanf("%d %d", &a, &b);
  printf("a+b = %d\n", a+b);
  printf("axb = %d\n\n", a*b);

  printf("(����3)��� ������ ���ϱ�\n");
  scanf("%d %d", &a, &b);
  printf("a/b = %d\n", a/b);
  printf("a%%b = %d\n\n", a%b);

  printf("(����4)�簢�� ���� ���ϱ�\n");
  scanf("%d %d", &a, &b);
  printf("axb = %d\n\n", a*b);

  printf("(����5)������ ��� ���ϱ�\n");
  scanf("%d %d %d", &a, &b, &c);
  sum=a+b+c;
  printf("sum = %d\n", sum);
  printf("sum/3 = %d\n\n", sum/3);

  printf("(����6)��Ƽ���� ������ ���̸� ���Ϳ� ��Ƽ���ͷ� ��ȯ�ϱ�\n");
  printf("cm �Է� : ");
  scanf("%d", &cm);
  m=cm/100;
  cm=cm%100;
  printf("%dm %dcm\n\n", m, cm);

  printf("(����7)�� ������ �ð��� �ð�, ��, �ʷ� ��ȯ�ϱ�\n");
  printf("s �Է� : ");
  scanf("%d", &s);
  h=s/3600;
  s=s%3600;
  m=s/60;
  s=s%60;
  printf("%dh %dm %ds\n\n", h, m, s);


return 0;

}