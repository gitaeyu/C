#include <stdio.h>
#include <stdlib.h>

// 4) ���� �ݴ�� �ƽ�Ű�ڵ�� �̷���� ���ڸ� �Է¹����� ����� �����Ǵ� �Լ��� ����ÿ�

char abc(char a)
{

  printf("���� %c �ƽ�Ű�ڵ� %d\n", a, a);

  return 0;

}


int main()
{
  int i;
  char a;
  int idx1=0;
  int idx2=0;
  char str[50];

  gets(str);

  while (str[idx1] != '\0')
  {
    idx1++;
  }

  

  for (i=0; i<idx1; i++)
  {
    if (str[i] == 32)
    {
      idx2++;
    }
    printf("%d\n", str[i]);
  }
  
  printf("���� : %d", idx2);

  // for (i = 0; i < 5; i++)
  // {
  //   while (str[i]==32)
  //   {
  //     printf("%d", str[i]);
  //   }
  // }
  

  // printf("���� �Է� : ");
  // gets(str);


  // while (str[idx1] != '\0')
  // {
  //   idx1++;
  // }

  // while (str[idx2] == 3)
  // {
  //   idx2++;
  // }
  
  // printf("str ũ�� %d\n", idx1);
  // printf("��� ���� %d\n", idx2);



  
  


  
  return 0;

}

