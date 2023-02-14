#include <stdio.h>

// 예제11 세수 중 큰 수 찾기(2)

int main()
{

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
    if (a>max)
    {
      max=a;
    }
      else
      {
        printf("max = %d", max);
      }
    


    
  return 0;
}