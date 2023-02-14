#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i, n;
  int idx=0;
  char str[50]="TME%QZIHK%BWO\\N%FTX%JZMUS%O[EW YHJ QA_Y%DTG";
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

  for (i=1; i < idx; i+=2)
  {
    str[i]=str[i]-5;
  }
  
  printf("\n");

  for (i=0; i < idx; i++)
  {
    printf("%c", str[i]);
  }

  return 0;
}