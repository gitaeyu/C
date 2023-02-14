#include <stdio.h>
int main()
{
  printf("(문제5) 프로그램 사용자로부터 입력 받은 정수의 평균을 출력하는 프로그램을 작성하되 다음 주 가지 조건을 만족 시켜야한다.\n먼저 몇 개의 정수를 입력할 것인지 프로그램 사용자에게 묻는다. 그리고 그 수만큼 정수를 입력받는다.\n평균 값은 소수점 이하까지 계산해서 출력한다.\n");

  int a=0, b=0, num=0, sum=0;
  float avg=0;

  printf("몇 개의 정수 입력 : ");
  scanf("%d", &num);

  while (a<num)
  {
    printf("정수 입력 : ");
    scanf("%d", &b);
    a++;
    sum= sum+b;
  }
    avg = (float)sum/num;

    printf("%f", avg);

  return 0;

}
