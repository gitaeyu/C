#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


// int prime_number()
// {
//   int a;
//   int b;
//   int i;

//   printf("정수를 입력하시오 : ");
//   scanf("%d", &a);

//   for (i=2; i < a; i++)
//   {
//     b=a%i;
//     if (b==0)
//     {
//       printf("소수가 아닙니다.\n");
//       return 0;
//     }
//   }

//     printf("소수입니다.\n");
  
//   return 0; 

// }

char name[10];
int age;

int main()
{
  printf("이름을 입력 하시오 : ");
  scanf("%s", &name);
  printf("나이를 입력 하시오 : ");
  scanf("%d", &age);
  printf("이름은 %s, 나이는 %d 입니다", name, age);

}