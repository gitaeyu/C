#include <stdio.h>
int main()
{
  // 7-2 while���� ��ø

  printf("(����2) �Ʒ��� ����� ���̴� ���α׷��� �ۼ��غ���.\n");

  int dan=0, a=0, b=1;

  while (dan<5)
  {
    while (a<b-1)
    {
      printf("O");
      ++a;
    }
    printf("*\n");
    a=0;
    b++;
    dan++;

  }
  

  return 0;

}
