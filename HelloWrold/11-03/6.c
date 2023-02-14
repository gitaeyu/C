#include <stdio.h>
int main()
{
  // 7-2 while문의 중첩

  printf("(문제1) 이번에 제시하는 문제들은 while문을 중첩시켰을 때 쉽게 해결할 수 있는 무제들이다. 물론 중첩 시키지 않고도 해결이 가능하지만, while문의 중첩을 연습하자는 것이니 반드시 while문을 중첩 시켜서 해결을 하자. \n");

  int a=0, b=0;

  printf("0이 아닌 정수 5개 입력 :\n");


  while (a<5)
  {
    scanf("%d", &b);
    while (b<1)
    {
      printf("1이상 입력 : ");
      scanf("%d", &b);
    }
    
    a++;
  }
  

  return 0;

}
