#include <stdio.h>

// int main()
// {
//   const unsigned int Num1 = 3;
//   const unsigned int Num2 = 5;
//   // const unsigned int Num3 = NUM1 & NUM2; /*Num3의 주소는 0x00*/


//   // printf("%p \n", &Num3);
//   //printf("%d\n", Num3);
//   printf("%p \n", &Num1);
//   printf("%d \n", Num1);
//   printf("%p \n", &Num2);
//   printf("%d \n", Num2);

//   return 0;
// }

int main()
{
  int num1 = 15;
  int num2 = 30;
  int num3 = 45;

  int* ptr1 = &num1;
  int* ptr2 = &num2;
  int* ptr3 = &num3;

  ptr1 = ptr2; 
  ptr2 = ptr3;

  *ptr1 += *ptr3;

  *ptr2 *= 2;
  
  printf("%d %d %d" , num1,num2,num3);

  return 0;


}