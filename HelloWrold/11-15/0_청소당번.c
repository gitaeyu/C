#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int random, i, n, m, o, p;
  char str[504] = {"강민영고연재김기태김명은김성일김연수김재일노도현류가미박규환박성빈박시형박의용오송화이범규이보라이소윤이여름이지혜이현도임성경임영효임홍선장은희정연우정철우주민석최진혁"};
  
  

  
  srand(time(NULL));
  n = (rand() % 28)*6;           // 분리수거1
  printf("분리수거1 : %c%c%c%c%c%c\n", str[n], str[n+1], str[n+2], str[n+3], str[n+4], str[n+5]);
  

  m = (rand() % 28)*6;
  while (n==m)                        // 분리수거 1과 2가 같으면 한번 더 랜덤 함수 사용
  {
    m = (rand() % 28)*6;
  }

  printf("분리수거2 : %c%c%c%c%c%c\n", str[m], str[m+1], str[m+2], str[m+3], str[m+4], str[m+5]);


  o = (rand() % 28)*6;
  while ((n==o) || (m==o))                  
  {      
    o = (rand() % 28)*6;               // 쓸기가 분리수거 1or2가 같으면 한번 더 랜덤 함수 사용
  }
  printf("쓸     기 : %c%c%c%c%c%c\n", str[o], str[o+1], str[o+2], str[o+3], str[o+4], str[o+5]);
  
  p = (rand() % 28)*6;
  while ((n==p) || (m==p) || (o==p))                  
  {
    p = (rand() % 28)*6;
  }

  printf("닦     기 : %c%c%c%c%c%c\n", str[p], str[p+1], str[p+2], str[p+3], str[p+4], str[p+5]);

  return 0;
}