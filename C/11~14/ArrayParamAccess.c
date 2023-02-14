#include <stdio.h>

void ShowArayElem(int * param, int len)
{
  int i;
  for (i=0; i<len; i++)
    printf("%d", param[i]); // 배열의 각 요소 프린트
  printf("\n");
}

void AddArayElem(int * param, int len, int add)
{
  int i;
  for (i=0; i<len; i++)
    param[i] += add; //배열의 요소에 add값만큼 더해준다
}

int main()
{
  int arr[3] = {1,2,3};
  AddArayElem(arr,sizeof(arr)/sizeof(int),1);
  ShowArayElem(arr,sizeof(arr)/sizeof(int));

  AddArayElem(arr,sizeof(arr)/sizeof(int),2);
  ShowArayElem(arr,sizeof(arr)/sizeof(int));

  AddArayElem(arr,sizeof(arr)/sizeof(int),3);
  ShowArayElem(arr,sizeof(arr)/sizeof(int));
  
  return 0;
}
