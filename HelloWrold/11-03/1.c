#include <stdio.h>
int main()
{
  printf("(����1) ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ�, �� ����ŭ ""hello world!""�� ��� �ϴ� ���α׷��� �ۼ��غ���.\n");

  int a=0;
  int num;
  printf("���� ���� �Է� : ");
  scanf("%d", &num);

  while (a<num)
  {
    printf("hello world! %d\n", a+1);
    a++;

  }
  
  return 0;
}
