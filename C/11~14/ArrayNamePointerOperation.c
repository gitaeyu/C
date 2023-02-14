#include <stdio.h>


int main()
{
  int arr1[3] = {1,2,3}; // 길이가 3인 int형 변수가 담긴 배열 선언
  double arr2[3] = {1.1,2.2,3.3}; // 길이가 3인 double형 변수가 담긴배열 선언

  printf("%d, %g \n", *arr1, *arr2); //arr1과 arr2가 가리키는 대상을 출력한다. 각 배열의 첫번째 요소를 출력
  *arr1 +=100; // arr1이 가리키는 변수에 +100을 해준다 즉 arr1[0] +=100
  *arr2 +=120.5; // arr2이 가리키는 변수에 +100을 해준다 즉 arr2[0] +=120.5
  printf("%d %g \n", arr1[0], arr2[0]);
  printf("%d %g \n", arr1[1], arr2[1]);
  printf("%d %g \n", arr1[2], arr2[2]);
  return 0;
}