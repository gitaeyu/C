#include<stdio.h>


int main()
{
  int dogs, cats;                              // 정수(int) 변수 2개
  // int dogs=0, cats=0;                       // 정수(int) 변수 2개 각각에 0으로 초기화 

  printf("개와 고양이를 몇마리 키우싶니까? \n"); 
  scanf("%d %d", &dogs, &cats);                         // scanf 정수(%d) 포맷 지정사 사용 시 변수 앞에 '&' 
  printf("개는 %d마리, 고양이는 %d마리입니다.\n", dogs, cats);    // 정수(%d) 포맷 지정자 2개, 정수(int) 변수 2개
  return 0;

}