#include <stdio.h>
#include <stdlib.h>

// 1) 영어 소문자를 대문자로 변환 되는 프로그램을 만드시오.

int main()
{
  char str[50];
  int i, idx=0;
  
  printf("영어 소문자 입력 : ");
  gets(str);


  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("str 크기 %d\n", idx);

  for (i=0; i < idx; i++)
  {
    printf("대문자 변환 : %c \n", str[i]-32);
  }

  

  return 0;

}