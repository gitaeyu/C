#include<stdio.h>

int main()
{
  int a=0;                // a=0으로 초기화
  int limit;

  printf("0부터 입력 된 수 만큼 출력 : ");
  scanf("%d", &limit);        // int b 변수에 정수 입력

  while (a < limit)           // a<limit 참일 때 까지 while문 {}안에 반복
  {                           // ex) b에 7을 입력 했다면 a<7
    printf("%d\n", a);
    a++;                      // a=a+1, a+=1 과 동일함
  }
  
  printf("종료\n");           // while문 끝난 후 출력

  return 0;
}