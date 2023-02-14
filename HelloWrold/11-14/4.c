#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
  char str[]="good morning!";
  printf("배열 str의 크기 : %d \n", sizeof(str));
  printf("널 문자 문자형 출력 : %c \n", sizeof(13));
  printf("널 문자 정수형 출력 : %d \n", sizeof(13));

  str[12]='?';

  printf("문자열 출력 : %s \n", str);


  return 0;


}
