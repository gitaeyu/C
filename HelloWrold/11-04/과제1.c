#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  int ball;
  int a=0, b=0, c=0;

  int random;
  srand(time(NULL));


  for (ball=1; ball<101; ball++)
  {
    random = rand() % 3;
    printf("%d포켓볼 던지기 : ", ball);
    if (random==0)
    {
      printf("피카츄\n");
      a++;
    }
    if (random==1)
    {
      printf("파이리\n");
      b++;
    }
    if (random==2)
    {
      printf("꼬북이\n");
      c++;
    }
  }
  
  printf("피카츄%d마리, 파이리%d마리, 꼬북이%d마리", a, b, c);
  
  return 0;

}
