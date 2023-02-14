#include<stdio.h>


int main()
{
  int dogs;                                       // 'dogs'라는 '정수int' 변수를 정의한다.

  printf("개를 몇 마리나 키우십니까? \n");        // printf 기본형
  scanf("%d", &dogs);                             // scanf 기본형
                                                  // --> dogs가 int형이기 때문에 %d(정수) 포맷 지정자 사용
  printf("개를 %d마리 키우신다구요!\n", dogs);    // dogs가 int형이기 때문에 %d(정수) 포맷 지정자 사용
  return 0;

}