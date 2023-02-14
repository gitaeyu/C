#include <stdio.h>
#include <stdlib.h>

// continue

int main()
{

  int result;
  int a=0, b=0;
  int select;

  int add(int num1, int num2)
  {
    return num1+num2;
  }
  int sub(int num1, int num2)
  {
    return num1-num2;
  }
  int multi(int num1, int num2)
  {
    return num1*num2;
  }
  int div(int num1, int num2)
  {
    return num1/num2;
  }


  printf("정수 2개 입력 하시오 : ");
  scanf("%d %d", &a, &b);
  printf("수행할 연산자를 고르세요\n");
  printf("1. 더하기 ");
  printf("2. 빼기 ");
  printf("3. 곱하기 ");
  printf("4. 나누기 ");
  printf("5. 종료\n");
  
  

  while (printf("수행할 연산자를 고르세요\n"), scanf("%d", &select), select!=5)
  {
    switch (select)
    {
      case 1 :
                result = add(a, b);
                printf("덧셈 결과: %d \n", result);
      break;
      case 2 :
                result = sub(a, b);
                printf("뺄셈 결과: %d \n", result);
      break;
      case 3 :
                result = multi(a, b);
                printf("곱하기 결과: %d \n", result);
      break;
      case 4 :
                result = div(a, b);
                printf("나누기 결과: %d \n", result);
      break;
    }
  }
  
  printf("종료\n");

  return 0;
}