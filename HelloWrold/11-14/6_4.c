#include <stdio.h>
#include <stdlib.h>

// 4) 위의 반대로 아스키코드로 이루어진 숫자를 입력받으면 영어로 번역되는 함수를 만드시오

// char abc(char a)
// {

//   printf("문자 %c 아스키코드 %d\n", a, a);

//   return 0;

// }


int main()
{
  int i;
  int a=0;
  int idx=0;
  char str[50];
  
  printf("정수 입력 : ");

  for (i=0; i<100; i++)
  {
    
    scanf("%d", &a);
    str[i]=a;
    printf("%c\n", str[i]);
  }
  

  return 0;

}

