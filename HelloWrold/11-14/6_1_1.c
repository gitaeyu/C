#include <stdio.h>
#include <stdlib.h>

// 1) ���� �ҹ��ڸ� �빮�ڷ� ��ȯ �Ǵ� ���α׷��� ����ÿ�.

int main()
{
  char str[50];
  int i, idx=0;
  
  printf("���� �ҹ��� �Է� : ");
  gets(str);


  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("str ũ�� %d\n", idx);

  for (i=0; i < idx; i++)
  {
    printf("�빮�� ��ȯ : %c \n", str[i]-32);
  }

  

  return 0;

}