#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int abc();


int main()
{
  int sum=0, birth=0, death=0;
  int a = 0, b = 0;
  int total=0;
  char ryu1[100];
  char ryu2[100];

  // ryu1 = getchar();
  // ryu2 = getchar();

  // putchar(ryu1);
  // putchar(ryu2);

  printf("류의 애칭을 지어주세요 :");
  scanf("%s", &ryu1);

  printf("류의 짝꿍 애칭을 지어주세요 :");
  scanf("%s", &ryu2);

  printf("류의 애칭은%s, 류 짝꿍 애칭은%s\n", ryu1, ryu2);


  srand(time(NULL));
  for ( ;total<500; )
  {
    if(total==0)
    {
    total+=abc();
    printf("%d쌍 태어남\n", total);
    }
    sleep(1);
    while (a<total)
    {
      birth+=abc();
      a++;
    }
    printf("%d쌍 중에서 %d쌍 태어남\n", total, birth);

    death+=abc();

    printf("%d쌍 죽음\n", death);
    
    total=birth-death;
    death =0;
    
    printf("%d쌍 생존\n", total);
    printf("------------\n");
    b++;
  }
  
  printf("%d회 만에 500쌍 이상", b);

  return 0;
}



int abc()
{
  int random;
  srand(time(NULL));
  random = rand() % 5+1;
  return random;
}
