#include <stdio.h>
#include <stdlib.h>

// 4) 위의 반대로 아스키코드로 이루어진 숫자를 입력받으면 영어로 번역되는 함수를 만드시오

char abc(char a)
{

  printf("문자 %c 아스키코드 %d\n", a, a);

  return 0;

}


int main()
{
  int i;
  char a;
  int idx1=0;
  int idx2=0;
  char str[50];

  gets(str);

  while (str[idx1] != '\0')
  {
    idx1++;
  }

  

  for (i=0; i<idx1; i++)
  {
    if (str[i] == 32)
    {
      idx2++;
    }
    printf("%d\n", str[i]);
  }
  
  printf("띄어쓰기 : %d", idx2);

  // for (i = 0; i < 5; i++)
  // {
  //   while (str[i]==32)
  //   {
  //     printf("%d", str[i]);
  //   }
  // }
  

  // printf("정수 입력 : ");
  // gets(str);


  // while (str[idx1] != '\0')
  // {
  //   idx1++;
  // }

  // while (str[idx2] == 3)
  // {
  //   idx2++;
  // }
  
  // printf("str 크기 %d\n", idx1);
  // printf("띄어 쓰기 %d\n", idx2);



  
  


  
  return 0;

}

