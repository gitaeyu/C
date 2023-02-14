#include <stdio.h>
int main(void) {
  int a;//여기에 정수 a, 실수 B를 선언하세요
  float b;

  printf("정수를 입력하시오 : ");
  scanf("%d", &a);     //scanf를 사용하여 a, b의 값을 입력받으세요
  printf("실수를 입력하시오 : ");
  scanf("%f", &b);     //scanf를 사용하여 a, b의 값을 입력받으세요
  printf("정수 : %d, 실수는 %f", a, b);      //정수 및 실수를 출력하세요
  
  return 0;
  }