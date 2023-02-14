#include <stdio.h>

// 예제15 3의 배수이면서 5의 배수 판별하기

int main()
{

    int a;

    printf("a 입력 : ");
    scanf("%d", &a);

    if (a%3==0 && a%5==0)
    {
      printf("3과 5의 배수");
    }
      else
      {
        printf("3과 5의 배수 아님");
      }
  
    


  
  return 0;
}