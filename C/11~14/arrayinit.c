#include <stdio.h>

int main(void)
{
  int arr1[5] = {1,2,3,4,5};  // 배열의 길이가 5인 arr1 선언 및 초기화
  int arr2[] = {1,2,3,4,5,6,7}; // 배열의 길이를 지정하지 않고 초기화 이렇게되면 길이는 7로 만들어진다.
  int arr3[5] = {1,2}; // 배열의 길이가 5이므로 arr3[0] = 1 , arr3[2] = 2 
  int ar1Len, ar2Len, ar3Len, i;

  printf("배열 arr1의 크기 : %d \n", sizeof(arr1)); // int형 변수가 5개 들어가는 배열이므로 크기는 4*5로 20
  printf("배열 arr2의 크기 : %d \n", sizeof(arr2)); // int형 변수가 5개 들어가는 배열이므로 크기는 4*7로 28
  printf("배열 arr3의 크기 : %d \n", sizeof(arr3));

  ar1Len = sizeof(arr1) / sizeof(int); // 배열 arr1의 길이 계산
  ar2Len = sizeof(arr2) / sizeof(int); // 배열 arr2의 길이 계산
  ar3Len = sizeof(arr3) / sizeof(int); // 배열 arr3의 길이 계산

  for(i=0; i<ar1Len; i++)
    printf("%d ", arr1[i]);
  printf("\n");

  for(i=0; i<ar2Len; i++)
    printf("%d ", arr2[i]);
  printf("\n");

  for(i=0; i<ar3Len; i++)
    printf("%d ", arr3[i]);
  printf("\n");

  return 0;
}