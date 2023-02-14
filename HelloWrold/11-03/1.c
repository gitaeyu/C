#include <stdio.h>
int main()
{
  printf("(문제1) 프로그램 사용자로부터 양의 정수를 하나 입력 받아서, 그 수만큼 ""hello world!""를 출력 하는 프로그램을 작성해보자.\n");

  int a=0;
  int num;
  printf("양의 정수 입력 : ");
  scanf("%d", &num);

  while (a<num)
  {
    printf("hello world! %d\n", a+1);
    a++;

  }
  
  return 0;
}
