#include<stdio.h>


int main()

  int a, b, c;        // 정수(int) 변수 3개

  a=0;        // 0을 a에 대입한다.
  a=b+c;      // b+c를 a에 대입한다.
  a=b-c;      // b-c를 a에 대입한다.
  a=b/c;      // b/c를 a에 대입한다.
  a=b%c;      // b%c를 a에 대입한다.('%' 값을 나눈 나머지)
  
  a+=b;       // a=a+b  // a+b를 a에 대입한다. 조건문에서 많이 사용
              // ex) sum+=a (합계에 계속해서 값을 더해줄 때) 
  a-=b;       // a=a-b  // a-b를 b에 대입한다. 조건문에서 많이 사용

}