#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int prime_number()
{
  int a;
  int b;
  int i;

  printf("������ �Է��Ͻÿ� : ");
  scanf("%d", &a);

  for (i=2; i < a; i++)
  {
    b=a%i;
    if (b==0)
    {
      printf("�Ҽ��� �ƴմϴ�.\n");
      return 0;
    }
  }

    printf("�Ҽ��Դϴ�.\n");
  
  return 0; 

}

int main()
{
  int pn;
  
  prime_number(int pn)

}