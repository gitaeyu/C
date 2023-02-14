#include <stdio.h>
int main()
{
  printf("(문제4) 프로그램 사용자로부터 입력 받은 숫자에 해당하는 구구단을 출력하되, 역순으로 출력하는 프로그램을 작성해보자.\n");

  int dan, num=1;
  printf("단 입력 :");
  scanf("%d", &dan);

  while (num<10)
  {
    printf("%d\n", dan*(10-num));
    num++;
  }
  

  return 0;

}
