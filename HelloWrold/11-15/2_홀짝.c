#include <stdio.h>
#include <stdlib.h>


int main()
{
  int i, n;
  int idx=0;
  char str[50]="THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG";
  char tran[50];
  

  // gets(str);

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("ũ�� %d", idx);

  printf("�迭�� ũ�� %d\n", sizeof(str));

  for (i=0; i < idx; i++)
  {
    printf("%c", str[i]);
  }
  printf("\n");
  printf("¦�� : ");
  for (i=0, n=0; i < idx ;i+=2, n++)      // ¦��
  {
    tran[n]=str[i];
    printf("%c", tran[n]);
  }
  printf("\n");
  printf("Ȧ�� : ");
  for (i=1, n=23; i < idx+23 ;i+=2, n++)      // Ȧ��
  {
    tran[n]=str[i];
    printf("%c", tran[n]);
  }
  printf("\n");
  printf("��ȯ : ");
  for (i = 0; i < idx; i++)
  {
    printf("%c", tran[i]);
  }
  

  printf("\n");

  // for (i = idx ; i >= 0; i--)
  // {
  //   def(str[i]);
  // }

  
  
  return 0;
}

