#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i, n;
  int idx=0;
  char str[50]="ZNK&W[OIQ&HXU]T&LU^&P[SVY&U\\KX&ZNK&RG`_&JUM";
  char tran[50];
  


  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("Å©±â %d\n", idx);

  for (i=0; i < idx; i++)
  {
    printf("%d ", str[i]);
  }

  printf("\n");

  
  printf("\n");

  for (i=0; i < idx; i++)
  {
    printf("%c", str[i]-6);
  }

  return 0;
}