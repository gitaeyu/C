#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double celtofah(double a)
{
  return (1.8*a)+32;
}

double fahtocel(double a)
{
  return (a-32)/1.8;
}

int main()
{
  double a=0, b=0;

  printf("섭씨를 화씨로 변환\n");
  scanf("%lf", &a);
  printf("%.1f섭씨, %.1f화씨\n", a, celtofah(a));
  printf("화씨를 섭씨로 변환\n");
  scanf("%lf", &b);
  printf("%.1f화씨, %.1f섭씨\n", b, fahtocel(a));

  return 0;

}