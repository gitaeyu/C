#include <stdio.h>

int main(){
  int num1 = 100, num2 = 100;
  int *pnum;

  printf("%p \n",pnum); // 00400080 이라는 주소값을 가짐 고로 *pnum은 쓰레기값을 가지고 있을것.

  pnum = &num1; // num1 의 주소값을 pnum에 할당한다 변수 num1의 값을 가리키는 것
  printf("%p \n",pnum); // pnum의 주소값은 0061FF18 num1의 주소값과 같다
  printf("%p \n",&num1); // num1의 주소값은 0061FF18 
  printf("%d \n",*pnum); // 포인터가 가리키는 메모리를 참조하는 연산자 * 을 이용하여 num1의 값을 프린트 한다
  (*pnum)+=30; // pnum이 가리키는 변수에 대하여 + 30을 해준다 즉 num1값에 30을 더해주는것
  printf("%d \n",num1); // num1의 값 프린트 130 이 나온다
  printf("%d \n",*pnum); // num1의 값 프린트 130 이 나온다
  pnum = &num2; // pnum에 해당하는 포인터 값을 num2의 주소값으로 할당
  (*pnum)-=30; // pnum이 가리키는 변수 num2 의 값을 -30 해준다.
  printf("%p \n",pnum); // num2의 주소값 프린트
  printf("%d \n",*pnum); // num2의 값 프린트
  printf("num1 : %d, num2 : %d",num1,num2);

  return 0;
}