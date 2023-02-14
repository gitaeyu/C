#include <stdio.h>

// 예제14 나이에 따른 입장료

int main()
{

    int age;
    float charge=5000;

    printf("age 입력 : ");
    scanf("%d", &age);

    if (age<8)
    {
      printf("8세 미만 : 0원");
    }
      if (age<60)
      {
        printf("8세~60세 미만 : %.f원", charge);
      }
      else
      {
        printf("60세 이상 : %.f원", charge*0.5);
      }
    


  
  return 0;
}