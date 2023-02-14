#include <stdio.h>
#include <stdlib.h>

// continue

int main()
{

    int num;
    printf("start! ");


    for (num=1; num<20; num++)
    {
      if (num%2==0 || num%3==0)
        continue;
        printf("%d ", num);
    }
    
   printf("end! \n");


  return 0;
}