#include <stdio.h>
int main()
{
  printf("(����5) ���α׷� ����ڷκ��� �Է� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��ϵ� ���� �� ���� ������ ���� ���Ѿ��Ѵ�.\n���� �� ���� ������ �Է��� ������ ���α׷� ����ڿ��� ���´�. �׸��� �� ����ŭ ������ �Է¹޴´�.\n��� ���� �Ҽ��� ���ϱ��� ����ؼ� ����Ѵ�.\n");

  int a=0, b=0, num=0, sum=0;
  float avg=0;

  printf("�� ���� ���� �Է� : ");
  scanf("%d", &num);

  while (a<num)
  {
    printf("���� �Է� : ");
    scanf("%d", &b);
    a++;
    sum= sum+b;
  }
    avg = (float)sum/num;

    printf("%f", avg);

  return 0;

}