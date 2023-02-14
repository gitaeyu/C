#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int abc();
int def();

int main()
{
  int whaching = 0;
  int sub = 0;
  char name[20];
  int n=1;
  int a=0;

  printf("유튜브 채널 이름 입력 : ");

  scanf("%s", name);

  printf("유튜브 이름은 %s입니다.\n", name);

    for (a=1; a<=20; a++)
    {
      printf("%d번째\n", a);

      while (n<=10)
      {
        whaching += abc();
        printf("%d 현재 시청자수 : %d\n", n, whaching);
        n++;
      }
      printf("10번 동안 total 시청자 수 : %d\n", whaching);

      sub=(whaching/def())+sub;

      printf("구독자수 : %d\n", sub);

      n=1;
      whaching=0;
      sleep(1);
    }
  
    if (sub>100000)
    {
      printf("실버버튼 증정\n");
    }
    else
    {
      printf("*채널 폭파*\n");
    }
    

  return 0;

}

int abc()
{
  int random;
  srand(time(NULL));
  random = rand() % 2451+50;
    return random;
}

int def()
{
  int random;
  random = rand() %4+1;
    return random;
}
