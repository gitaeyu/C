#include <stdio.h>

// 예제16 나이에 따른 공원 입장료

int main()
{

    int age;

    printf("age 입력 : ");
    scanf("%d", &age);

    if (age<8 || age>=60)
    {
      printf("무료");
    }
      else
      {
        printf("5,000원");
      }
  
    



  return 0;
}