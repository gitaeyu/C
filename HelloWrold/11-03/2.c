#include <stdio.h>
int main()
{
  printf("(문제2) 프로그램 사용자로부터 양의 정수를 하나 입력 받은 다음, 그 수만큼 3의 배수를 출력하는 프로그램을 작성해보자. 예를 들어서 5를 입력 받았다면, 3 6 9 12 15를 출력해야 한다.\n");

  int a=1;
  int num;
  printf("양의 정수 입력 : ");
  scanf("%d", &num);

  while (a<num+1)
  {
    
    printf("%d\n", a*3);
    a++;

  }
  
  return 0;
}
