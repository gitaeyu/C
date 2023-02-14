#include<stdio.h>

int main()
{
  int a=0;                // a=0으로 초기화

  while (a < 5)           // a<5 참일 때 까지 while문 {}안에 반복
  {
    printf("%d\n", a);
    a++;
  }
  
  printf("종료\n");       // while문 끝난 후 출력

  return 0;
}