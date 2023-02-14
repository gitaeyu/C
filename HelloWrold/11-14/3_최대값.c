#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{

  int arr[5];
  int max, min, sum, i;

  for (i=0; i<5; i++)
  {
    printf("ют╥б : ");
    scanf("%d", &arr[i]);
  }

  max=min=sum=arr[0];

  for (i=1; i<5; i++)
  {
    sum += arr[i];

    if(max<arr[i])
    {
      max=arr[i];
    }

    if(min>arr[i])
    {
      min=arr[i];
    }

  }

  printf("Max %d\n", max);
  printf("Min %d\n", min);
  printf("sum %d\n", sum);

  return 0;

}
