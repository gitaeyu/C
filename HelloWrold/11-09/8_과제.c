#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int cola=1200;
  int u_cola=1900;
  int z_cola=1200;
  int cida=1100;
  int hwanta=900;
  int doctor=1100;
  int monster=1800;
  int power=1900;
  int nesti=1600;
  int water=2100;
  int mate=1700;
  int coffe=900;
  int ambasa=900;
  int matecha=1700;
  int select1, select2;
  int money;
  int sum=0;
  char b;

  printf("돈을 넣어주세요 : ");
  scanf("%d", &money);

  for ( ; sum < money ; )
  {
      
    switch (printf("상품을 골라주세요 : "), scanf("%d", &select1), select1)
    {
    case 1:
      sum+=1200;
      printf("콜라 구매\n");
      printf("사용한 금액 : %d\n", sum);
      break;
    case 2:
      sum+=1900;
      printf("우주맛콜라 구매\n");
      printf("사용한 금액 : %d\n", sum);
      break;
    case 3:
      sum+=1200;
      printf("제로콜라 구매\n");
      printf("사용한 금액 : %d\n", sum);
      break;
    case 100:
      printf("총 금액은 %d입니다.\n", sum);
      sum=money;
      break;
    }


    if (sum > money)
    {
      printf("사용 금액을 초과 하였습니다.\n");
      break;
    }
  
  }
  
  return 0;
}

  // while (printf("수행할 연산자를 고르세요\n"), scanf("%d", &select), select!=5)
  // {
  //   switch (select)
  //   {
  //     case 1 :
  //               result = add(a, b);
  //               printf("덧셈 결과: %d \n", result);
  //     break;
  //     case 2 :
  //               result = sub(a, b);
  //               printf("뺄셈 결과: %d \n", result);
  //     break;
  //     case 3 :
  //               result = multi(a, b);
  //               printf("곱하기 결과: %d \n", result);
  //     break;
  //     case 4 :
  //               result = div(a, b);
  //               printf("나누기 결과: %d \n", result);
  //     break;
  //   }
  // }