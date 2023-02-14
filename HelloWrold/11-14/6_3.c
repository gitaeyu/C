#include <stdio.h>
#include <stdlib.h>

// 3) 영어를 입력 받으면 숫자(아스키코드)로 자동 번역되는 함수를 만드시오.

char abc(char a)
{

  printf("문자 %c 아스키코드 %d\n", a, a);

  return 0;

}


int main()
{
  int i;
  int idx=0;
  char str[50];
  

  // gets(str);

  

  while (str[idx] != '\0')
  {
    scanf("%d", str[]);
    idx++;
  }
  
  printf("크기 %d\n", idx);

  for (i=0; i < idx; i++)
  {
    abc(str[i]);
  }
  
  return 0;

}

