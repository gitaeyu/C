#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int art(void)
{
printf("        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣷⣦\n");
printf("⠀⠀⠀⠀⠀⠀⠀⣀⣶⣿⣿⣿⣿⣿⣿⣷⣶⣶⣶⣦⣀⡀⠀⢀⣴⣇⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⣰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀\n");
printf("⠀⠀⠀⣴⣿⣿⣿⣿⠛⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣄⠀⠀⠀\n");
printf("⠀⠀⣾⣿⣿⣿⣿⣿⣶⣿⣯⣭⣬⣉⣽⣿⣿⣄⣼⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀\n");
printf("⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄\n");
printf("⢸⣿⣿⣿⣿⠟⠋⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠁⣿⣿⣿⣿⡿⠛⠉⠉⠉⠉⠁\n");
printf("⠘⠛⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠛⠛⠛⠃⠀⠀⠀⠀⠀⠀⠀\n");
}

int main()
{
  int cola=1200;
  int u_cola=1900;
  int z_cola=1200;
  int cida=1100;
  int hwanta=900;
  int doctor=1100;
  int monster=1800;
  int power=1900;
  int nesti=1600;
  int water=2100;
  int mate=1700;
  int coffe=900;
  int ambasa=900;
  int matecha=1700;
  char select1;
  int money=0;
  int sum=0;
  int i;
  char b;

  printf("돈을 넣어주세요 : ");
  scanf("%d", &money);

  while (sum < money)
  {
    printf("상품을 골라주세요 :");
    scanf(" %c", &select1);
    switch(select1)
    {
      case 49:
        sum+=cola;
        printf("콜라 구매\n");
        break;
      case 50:
        sum+=u_cola;
        printf("우주맛콜라 구매\n");
        break;
      case 51:
        sum+=z_cola;
        printf("제로콜라 구매\n");
        break;
      case 52:
        sum+=cida;
        printf("스프라이트 구매\n");
        break;
      case 53:
        sum+=hwanta;
        printf("환타 구매\n");
        break;
      case 54:
        sum+=doctor;
        printf("닥터페퍼 구매\n");
        break;
      case 55:
        sum+=monster;
        printf("몬스터 구매\n");
        break;
      case 56:
        sum+=power;
        printf("파워에이드 구매\n");
        break;
      case 57:
        sum+=nesti;
        printf("네스티 구매\n");
        break;
      case 58:
        sum+=water;
        printf("글라소 비타민 워터 구매\n");
        break;
      case 59:
        sum+=mate;
        printf("미닛메이드 구매\n");
        break;
      case 60:
        sum+=coffe;
        printf("조지아 커피 구매\n");
        break;
      case 13:
        sum+=ambasa;
        printf("암바사 구매\n");
        break;
      case 14:
        sum+=matecha;
        printf("마테차 구매\n");
        break;
      case 115:
        printf("총 금액은 %d입니다. 계산하세요.\n", sum);


        art();

        return 0;
      case 120:
        printf("종료\n");
        return 0;
    }

      printf("사용한 금액 : %d\n", sum);
    
  }

  printf("사용 금액을 초과 하였습니다.\n");

  return 0;

}


