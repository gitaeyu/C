#include <stdio.h>

int main(){
  int arr[3] = {11,22,33};
  int * ptr = arr;  // int * ptr = &arr[0] 과 같다.
  printf("%d %d %d \n", *ptr, *(ptr+1),*(ptr+2));

  printf("%d ", *ptr); ptr++; // printf 함수 호출 후 , ptr ++실행;
  printf("%d ", *ptr); ptr++;
  printf("%d ", *ptr); ptr--; // printf 함수 호출 후 , ptr --실행;
  printf("%d ", *ptr); ptr--;
  printf("%d ", *ptr); printf("\n");
}