#include <stdio.h>

// int SquareByValue(int param)
// {
//   return param*param;
// }

// void SquareByReference(int *param)
// {
//   *param = *param * *param;
// }
// int main(){
//   int num = 4;
//   int c;

//   c = SquareByValue(num);
//   printf("%d \n",c);
//   printf("%d \n",num);

//   SquareByReference(&num);
//   printf("%d \n",num);
//   return 0;
// }

int Swap3(int *param1,int *param2,int *param3)
{
  int temp;
  temp = *param1;
  *param1 = *param3;
  *param3 = *param2;
  *param2 = temp;
  
}

int main()
{
  int num1 = 4;
  int num2 = 5;
  int num3 = 6;
  Swap3(&num1,&num2,&num3);
  printf("%d %d %d", num1,num2,num3);
  return 0;
}