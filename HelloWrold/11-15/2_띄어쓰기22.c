#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i, n;
  int idx=0;
  char str[50]="THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG";
  char tran[50];
  
  int a=1;

  // gets(str);

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("Å©±â %d", idx);

  printf("¹è¿­ÀÇ Å©±â %d\n", sizeof(str));

  for (i=0; i < idx; i++)
  {
    printf("%c", str[i]);
  }
  printf("\n");
  printf("Â¦¼ö : ");
  for (i=0, n=0; i < 50 ;i+=2, n++)      // Â¦¼ö
  {
    tran[n]=str[i];
    printf("%c", tran[n]);
  }
  printf("\n");
  printf("È¦¼ö : ");
  for (i=1, n=22; i < 49 ;i+=2, n++)      // È¦¼ö
  {
    tran[n]=str[i];
    printf("%c(%d)", tran[n], tran[n]);
  }
  printf("\n");
  printf("º¯È¯ : ");
  for (i = 0; i < idx; i++)
  {
    printf("%c", tran[i]);
  }
  printf("\n");

  // ---------------------------------------------------- //
  printf("----------------------------------------------------\n");

  for (i = 0; i < idx; i++)
  {
    printf("%d ", tran[i]);
  }

  printf("\n");



  for (i = 0; i < idx; i++)
  {
    while (tran[i]==32)
    {
      tran[i]=tran[i]+a;
      a++;
      break;
    }
  }

  for (i = 0; i < idx; i++)
  {
    printf("%d ", tran[i]);
  }


  return 0;
}

