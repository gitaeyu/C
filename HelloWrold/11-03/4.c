#include <stdio.h>
int main()
{
  printf("(����4) ���α׷� ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ� �������� ����ϵ�, �������� ����ϴ� ���α׷��� �ۼ��غ���.\n");

  int dan, num=1;
  printf("�� �Է� :");
  scanf("%d", &dan);

  while (num<10)
  {
    printf("%d\n", dan*(10-num));
    num++;
  }
  

  return 0;

}
