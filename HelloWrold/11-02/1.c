#include<stdio.h>

int main(void)
{
  int num1=0;
  int num2=10;

  int result1 = num1++ + num2;
  
  int result2 = ++num1 + num2++;

  int result3 = num1-- + num1-- - --num2;

  int result4 = num2++ * num1++ - --num2 + num1;


  printf("°á°ú %d %d %d %d\n", result1, result2, result3, result4);

  return 0;
}