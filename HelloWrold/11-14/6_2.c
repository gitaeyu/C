#include <stdio.h>
#include <stdlib.h>

// 2) Hellw World�� �빮�� ������ ��ĭ���� �� �����Ͽ� �ƽ�Ű�ڵ� ���ڷ� ����Ͻÿ�.

int main()
{
  int i;
  int idx=0;
  char str[12]="Hello World";

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("ũ�� %d\n", idx);

  for(i=0; i<idx; i++)
  {
    printf("%c %d\n", str[i], str[i]);
  }

  return 0;

}