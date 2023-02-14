#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int imax(int a, int b, int c)
{
  int max;

  max=(a>b && a>c ?a: b>a && b>c ?b: c);

}

int imin(int a, int b, int c)
{
  int min;

  min=(a<b && a<c ? a: b<a && b<c ? b : c);
}



int main()
{
  int a, b, c;

  printf("세개의 정수 입력 : ");
  scanf("%d %d %d", &a, &b, &c);

  printf("max = %d\n", imax(a, b, c));
  printf("min = %d", imin(a, b, c));

  return 0;

}