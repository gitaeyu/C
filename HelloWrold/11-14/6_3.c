#include <stdio.h>
#include <stdlib.h>

// 3) ��� �Է� ������ ����(�ƽ�Ű�ڵ�)�� �ڵ� �����Ǵ� �Լ��� ����ÿ�.

char abc(char a)
{

  printf("���� %c �ƽ�Ű�ڵ� %d\n", a, a);

  return 0;

}


int main()
{
  int i;
  int idx=0;
  char str[50];
  

  // gets(str);

  

  while (str[idx] != '\0')
  {
    scanf("%d", str[]);
    idx++;
  }
  
  printf("ũ�� %d\n", idx);

  for (i=0; i < idx; i++)
  {
    abc(str[i]);
  }
  
  return 0;

}

