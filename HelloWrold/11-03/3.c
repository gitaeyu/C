#include <stdio.h>
int main()
{
  printf("(문제3) 프로그램 사용자로부터 계속해서 정수를 입력 받는다. 그리고 그 값을 계속해서 더해 나간다. 이러한 작업은 프로그램 사용자가 0을 입력할 때까지 계속되어야 하며, 0이 입력되면 입력된 모든 정수의 합을 출력하고 프로그램을 종료 시킨다.\n");

  int sum=0, num;
  
  while (num!=0)
  {

    printf("정수 입력 :");
    scanf("%d", &num);
    sum=sum+num;

  }
  
  printf("정수를 더한 결과 : %d\n", sum);

  return 0;
}
