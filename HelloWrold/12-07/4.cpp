#include <stdio.h>
#include <stdlib.h>

// 5) 영어를 입력 받으면 해당 아스키코드 값에서 +3한 값이 나오는 암호 함수를 만드시오

char abc(char a)
{

  printf("문자 %c 아스키코드 %d\n", a+3, a+3);

  return 0;

}


int main()
{
  int i;
  int idx=0;
  char str[50];
  gets(str);

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("str 크기 %d\n", idx);

  for (i=0; i < idx; i++)
  {
    abc(str[i]);
  }
  
  return 0;

}

