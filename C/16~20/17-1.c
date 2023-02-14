#include <stdio.h>

void MaxAndMin(int **maxDptr, int **minDptr,int *arr)
{ 
  int i;

  *maxDptr = &arr[0];
  *minDptr = &arr[0];
  for(i=0;i<5;i++)
  {
    if(**maxDptr<arr[i])
      *maxDptr = &arr[i];
      
    if(**minDptr>arr[i])
      *minDptr = &arr[i];
  }
}
int main()
{
  int * maxPtr;
  int * minPtr;
  int arr[5] = {7,6,2,4,9};
  MaxAndMin(&maxPtr,&minPtr,arr);
  printf("%d %d",*maxPtr,*minPtr);
}