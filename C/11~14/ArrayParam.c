#include <stdio.h>

void ShowArayElem(int * _param, int _len)
{
  int i;
  for (i=0;i<_len;i++)
    printf("%d ", _param[i]);
  printf("\n");
}

int main()
{
  int arr1[3] = {1,2,3};
  int arr2[5] = {4,5,6,7,8};
  ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
  ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
  return 0;

}