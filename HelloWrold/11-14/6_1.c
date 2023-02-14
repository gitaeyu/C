#include <stdio.h>

// 1) 영어 소문자를 대문자로 변환 되는 프로그램을 만드시오.

int main()
{
  char str;
  
  printf("영어 소문자 입력 : ");
  scanf("%c", &str);

  str -= 32;

  printf("대문자 변환 : %c \n", str);

  return 0;

}