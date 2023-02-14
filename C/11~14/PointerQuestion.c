#include <stdio.h>

int main(){
  
  int num1 = 10; // int형 변수 num1 선언과 동시에 10으로 초기화
  int num2 = 20; // int형 변수 num2 선언과 동시에 20으로 초기화

  int* ptr1 = &num1 ; // int형 포인터 변수 ptr1을 선언하고 동시에 num1을 가리키게함 (num1의 주소값 반환)
  int* ptr2 = &num2 ; // int형 포인터 변수 ptr2을 선언하고 동시에 num2을 가리키게함 (num2의 주소값 반환)
  int* temp; // int형 포인터 변수 temp (임의의 주소값이 들어있을것)

  *ptr1 += 10; // num1을 가리키고 있으므로 num1에 +10 을 해준다 현재 num1 = 20
  *ptr2 -= 10; // num2를 가리키고 있으므로 num2에 -10을 해준다. 현재 num2 = 10

  temp = ptr1; // 포인터형 변수 temp에 ptr1의 주소값을 할당한다.
  ptr1 = ptr2; // 포인터형 변수 ptr1에 ptr2의 주소값을 할당한다.
  ptr2 = temp; // 포인터형 변수 ptr2에 temp의 주소값을 할당한다. 
  //결과적으로 ptr1과 ptr2의 가리키는 변수값이 바뀌었다. ptr1은 num2 ptr2는 num1을 가리킴.

  printf("%d %d", *ptr1, *ptr2);
  return 0; 
}