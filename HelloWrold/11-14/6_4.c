#include <stdio.h>
#include <stdlib.h>

// 4) ���� �ݴ�� �ƽ�Ű�ڵ�� �̷���� ���ڸ� �Է¹����� ����� �����Ǵ� �Լ��� ����ÿ�

// char abc(char a)
// {

//   printf("���� %c �ƽ�Ű�ڵ� %d\n", a, a);

//   return 0;

// }


int main()
{
  int i;
  int a=0;
  int idx=0;
  char str[50];
  
  printf("���� �Է� : ");

  for (i=0; i<100; i++)
  {
    
    scanf("%d", &a);
    str[i]=a;
    printf("%c\n", str[i]);
  }
  

  return 0;

}

