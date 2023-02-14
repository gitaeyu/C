#include <stdio.h>
#include <stdlib.h>

// 2) Hellw World를 대문자 수만자 빈칸등을 다 구분하여 아스키코드 숫자로 출력하시오.

int main()
{
  int i;
  int idx=0;
  char str[12]="Hello World";

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("크기 %d\n", idx);

  for(i=0; i<idx; i++)
  {
    printf("%c %d\n", str[i], str[i]);
  }

  return 0;

}