#include <stdio.h>
#include <stdlib.h>

// 5) 영어를 입력 받으면 해당 아스키코드 값에서 +3한 값이 나오는 암호 함수를 만드시오

char abc(char a)
{

  printf("문자 %c 아스키코드 %d\n", a, a);

  return 0;

}


int main()
{
  int i;
  int idx=0;
  char str[50]="THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG";
  

  // gets(str);

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("크기 %d", idx);

  printf("배열의 크기 %d\n", sizeof(str));

  for (i=0; i < idx; i++)
  {
    abc(str[i]);
  }
  
  
  return 0;
}

