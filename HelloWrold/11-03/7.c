#include <stdio.h>
int main()
{
  // 7-2 while문의 중첩

  printf("(문제2) 아래의 출력을 보이는 프로그램을 작성해보자.\n");

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
