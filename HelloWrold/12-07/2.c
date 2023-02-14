#include <stdio.h>
#include <stdlib.h>


char name[10];
int age;

int main()
{
  printf("이름을 입력 하시오 : ");
  scanf("%s", &name);
  printf("나이를 입력 하시오 : ");
  scanf("%d", &age);
  printf("이름은 %s, 나이는 %d 입니다", name, age);

}