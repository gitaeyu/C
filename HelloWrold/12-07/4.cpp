#include <stdio.h>
#include <stdlib.h>

// 5) ��� �Է� ������ �ش� �ƽ�Ű�ڵ� ������ +3�� ���� ������ ��ȣ �Լ��� ����ÿ�

char abc(char a)
{

  printf("���� %c �ƽ�Ű�ڵ� %d\n", a+3, a+3);

  return 0;

}


int main()
{
  int i;
  int idx=0;
  char str[50];
  gets(str);

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("str ũ�� %d\n", idx);

  for (i=0; i < idx; i++)
  {
    abc(str[i]);
  }
  
  return 0;

}

