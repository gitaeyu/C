#include <stdio.h>
#include <stdlib.h>

// 5) ��� �Է� ������ �ش� �ƽ�Ű�ڵ� ������ +3�� ���� ������ ��ȣ �Լ��� ����ÿ�

char abc(char a)
{

  printf("���� %c �ƽ�Ű�ڵ� %d\n", a, a);

  return 0;

}


int main()
{
  int i;
  int idx=0;
  char str[50]="THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG";
  

  // gets(str);

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("ũ�� %d", idx);

  printf("�迭�� ũ�� %d\n", sizeof(str));

  for (i=0; i < idx; i++)
  {
    abc(str[i]);
  }
  
  
  return 0;
}

