#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i, n;
  int idx=0;
  int str[50] = {420, 360, 341, 160, 401, 421, 361, 331, 371, 160, 330, 410, 391, 431, 390, 160, 350,391, 440, 160, 370, 421, 381, 400, 411, 160, 391, 430, 341, 410, 160, 420, 360, 341, 160, 380, 321, 450, 441, 160, 340, 391, 351};
  int tran[50];
  
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

  for (i=0; i < idx; i++)
  {
    if (str[i]%2==0)
    {
      tran[i]=str[i];
    }
    else
    {
      tran[i]=str[i]+4;
    }
    
  }
  
  printf("\n");

  for (i=0; i < idx; i++)
  {
    printf("%c", tran[i]/5);
  }

  return 0;
}

