#include <stdio.h>

// if 문

int main()
{

  int num;
  printf("정수입력 : ");
  scanf("%d", &num);

  if(num<0)
    printf("입력 값은 0보다 작다.\n");

  if(num>0)
    printf("입력 값은 0보다 크다.\n");

  if(num==0)
    printf("입력 값은 0이다.\n");

  
  return 0;
}
