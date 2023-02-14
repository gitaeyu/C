#include <stdio.h>

int main(){
  int arr[5]; //길이가 5인 int형 배열 선언 배열의 이름은 arr
  int sum=0 , i; // 

  arr[0]=10,arr[1]=20,arr[2]=30,arr[3]=40,arr[4]=50; // 첫번째 배열 요소부터 마지막 배열 요소의 값을 저장하고 있다.

  for(i=0; i<5; i++)
    sum += arr[i]; // 배열의 첫번째 값부터 5번째값까지 합해준다.

  printf("배열 요소에 저장된 값의 합 : %d \n ", sum); //sum 프린트
  return 0;  
}
