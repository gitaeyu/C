#include <stdio.h>


int main(void)
{

  int num1, num2, num3;
  int a, b, c;
  int result;

// printf("\n");
  printf("(����1) ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� �� ���� �E���� ������ ����� ����ϴ� ���α׷��� �ۼ�\n");
  scanf("%d %d", &num1, &num2);
  printf("%d+%d=%d\n", num1, num2, num1+num2);
  printf("%d-%d=%d\n\n", num1, num2, num1-num2);

  printf("(����2) ���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3 ������� �Է� ���� �Ŀ�, ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.\n");
  printf("���� �Է�1 : ");
  scanf("%d", &num1);
  printf("���� �Է�2 : ");
  scanf("%d", &num2);
  printf("���� �Է�3 : ");
  scanf("%d", &num3);
  printf("%dX%d+%d=%d\n\n", num1, num2, num3, num1*num2+num3);

  printf("(����3) �ϳ��� ������ �Է� �޾Ƽ�, �� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���. ���� �� 5�� �Է� �Ǹ� 25�� ��µǾ�� �Ѵ�.\n");
  printf("���� �Է� : ");
  scanf("%d", &a);
  printf("��� : %d\n\n", a*a);

  printf("(����4) �Է� ���� �� ������ �������� �� ��� �Ǵ� ��� �������� ����ϴ� ���Τѷ��� �ۼ��غ���. ���� �� 7�� 2�� �ԷµǸ� ������ 3, �������� 1�� ��µǾ�� �Ѵ�.\n");
  printf("���� �Է�1 : ");
  scanf("%d", &b);
  printf("���� �Է�2 : ");
  scanf("%d", &c);
  printf("�� : %d, ������ : %d\n\n", b/c, b%c);

  printf("(����5) �Է� ���� �� ���� ���� num1, num2, num3�� ������� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���.\n");
  printf("3�� ���� �Է� : ");
  scanf("%d %d %d", &num1, &num2, &num3);
  result=(num1-num2)*(num2+num3)*(num3%num1);
  printf("��� : (%d-%d)x(%d+%d)x(%d%%%d) = %d", num1, num2, num2, num3, num3, num1, result);
 
 return 0;

}

