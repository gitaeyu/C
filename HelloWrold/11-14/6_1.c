#include <stdio.h>

// 1) ���� �ҹ��ڸ� �빮�ڷ� ��ȯ �Ǵ� ���α׷��� ����ÿ�.

int main()
{
  char str;
  
  printf("���� �ҹ��� �Է� : ");
  scanf("%c", &str);

  str -= 32;

  printf("�빮�� ��ȯ : %c \n", str);

  return 0;

}