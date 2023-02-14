#include<stdio.h>

int main(void)
{
  printf("(문제1) 프로그램 사용자로부터 두 점의 x, y 좌푤르 입력 받아서, 두 점이 이루는 직사각형의 넓이를 계산하여 출력하는 프로그램을 작성해보자. 단, 좌 상단의 x, y 좌표 값이 우 하단의 x, y 좌표 값보다 작다고 가정하고, 좌 상단의 좌표정보를 먼저 입력 받는 형태로 예제를 작성해보자. 참고할 수 있는 실행의 예는 다음과 같다.\n");

  int x1, y1, x2, y2;
  
  printf("좌 상단의 x, y 좌표 :");
  scanf("%d %d", &x1, &y1);
  printf("우 하단의 x, y 좌표 :");
  scanf("%d %d", &x2, &y2);

  int xresult = x2-x1;
  int yresult = y2-y1;
  int result = xresult*yresult;
  printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", result);




  return 0;
} 