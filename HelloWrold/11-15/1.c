#include <stdio.h>
#include <stdlib.h>

char abc(char a)
{

  printf("%c(%d)", a, a);

  return 0;

}

// char def(char a)
// {

//   printf("%d ", a);

//   return 0;

// }

int main()
{
  int i;
  int idx=0;
  char str[50]="THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG";
  

  // gets(str);

  while (str[idx] != '\0')
  {
    idx++;
  }
  
  printf("ũ�� %d", idx);

  printf("�迭�� ũ�� %d\n", sizeof(str));

  // for (i=0; i < idx; i++)
  // {
  //   abc(str[i]);
  // }
  
  for (i = idx ; i >= 0; i--)
  {
    abc(str[i]);
  }

  printf("\n");

  // for (i = idx ; i >= 0; i--)
  // {
  //   def(str[i]);
  // }

  
  
  return 0;
}

