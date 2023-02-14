#include <stdio.h>

// 예제8 두수 중 큰 수 찾기

int main()
{
  // int num1, num2, result;

  //   printf("정수 입력: ");
  //   scanf("%d %d", &num1, &num2);

  //   result = (num1>num2 ? num1 : num2);

  //   printf("%d 정수가 더 크다 \n", result);


// 예제9 양수, 0, 음수 판별하기

  // int num;

  //   printf("정수 입력: ");
  //   scanf("%d", &num);

  //   if (num<0)
  //   {
  //     printf("음수");
  //   }
  //     else if(num>0)
  //     {
  //       printf("양수");
  //     }
  //     else if(num==0)
  //     {
  //       printf("0");
  //     }


//예제 10 세수 중 가장 큰수 찾기(1)
    // int num1, num2, num3;

    //   printf("정수 3개 입력 : ");
    //   scanf("%d %d %d", &num1, &num2, &num3);

    //   if (num1>num2)
    //   {
    //     if (num1>num3)
    //     {
    //       printf("%d", num1);
    //     }
    //     else
    //     {
    //       printf("%d", num3);
    //     }
    //   }
    //   else if (num2>num3)
    //   {
    //     printf("%d", num2);
    //   }
    //   else
    //   {
    //     printf("%d", num3);
    //   }
      
    
//예제 11 세 수 중 가장 큰 수 찾기(2)

    int max, a;

    printf("max 입력 : ");
    scanf("%d", &max);

    printf("a 입력 : ");
    scanf("%d", &a);

    if (a>max)
    {
      max=a;
    }
      else
      {
        printf("a 재입력 : ");
        scanf("%d", &a);
      }


    
  return 0;
}
