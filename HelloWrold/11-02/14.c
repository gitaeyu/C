#include<stdio.h>

int main(void)
{
  int a, b, c, d, e, f, g, h, i, j;
  
  char aa[100], bb[100], cc[100], dd[100], ee[100], ff[100], gg[100], hh[100], ii[100], jj[100]; 
  
  printf("1. 이름 입력 :");
  scanf("%s", &aa);
  printf("2. 이름 입력 :");
  scanf("%s", &bb);
  printf("3. 이름 입력 :");
  scanf("%s", &cc);
  printf("4. 이름 입력 :");
  scanf("%s", &dd);
  printf("5. 이름 입력 :");
  scanf("%s", &ee);
  printf("6. 이름 입력 :");
  scanf("%s", &ff);
  printf("7. 이름 입력 :");
  scanf("%s", &gg);
  printf("8. 이름 입력 :");
  scanf("%s", &hh);
  printf("9. 이름 입력 :");
  scanf("%s", &ii);
  printf("10. 이름 입력 :");
  scanf("%s", &jj);




  printf("10명의 뒷번호를 차례대로 입력하시오.\n");
  printf("1. %s 전화번호 뒷자리 입력 : ", aa);
  scanf("%d", &a);
  printf("2. %s 전화번호 뒷자리 입력 : ", bb);
  scanf("%d", &b);
  printf("3. %s 전화번호 뒷자리 입력 : ", cc);
  scanf("%d", &c);
  printf("4. %s 전화번호 뒷자리 입력 : ", dd);
  scanf("%d", &d);
  printf("5. %s 전화번호 뒷자리 입력 : ", ee);
  scanf("%d", &e);
  printf("6. %s 전화번호 뒷자리 입력 : ", ff);
  scanf("%d", &f);
  printf("7. %s 전화번호 뒷자리 입력 : ", gg);
  scanf("%d", &g);
  printf("8. %s 전화번호 뒷자리 입력 : ", hh);
  scanf("%d", &h);
  printf("9. %s 전화번호 뒷자리 입력 : ", ii);
  scanf("%d", &i);
  printf("10. %s 전화번호 뒷자리 입력 : ", jj);
  scanf("%d", &j);

  

  int avg1 =(85+30+30+30+a)/4;
  int avg2 =(85+30+30+30+b)/4;
  int avg3 =(85+30+30+30+c)/4;
  int avg4 =(85+30+30+30+d)/4;
  int avg5 =(85+30+30+30+e)/4;
  int avg6 =(85+30+30+30+f)/4;
  int avg7 =(85+30+30+30+g)/4;
  int avg8 =(85+30+30+30+h)/4;
  int avg9 =(85+30+30+30+i)/4;
  int avg10 =(85+30+30+30+j)/4;
  int avg11 = (a+b+c+d+e+f+g+h+i+j)/10;


  printf("                성   적   표                 \n");
  printf("---------------------------------------------\n");
  printf("%15s %5s %5s %5s %5s\n", "국어", "영어", "수학", "C언어", "평균");
  printf("%5s %7d %5d %5d %5d %5d\n", aa, 85, 30, 30, a, avg1);
  printf("%5s %7d %5d %5d %5d %5d\n", bb, 85, 30, 30, b, avg2);
  printf("%5s %7d %5d %5d %5d %5d\n", cc, 85, 30, 30, c, avg3);
  printf("%5s %7d %5d %5d %5d %5d\n", dd, 85, 30, 30, d, avg4);
  printf("%5s %7d %5d %5d %5d %5d\n", ee, 85, 30, 30, e, avg5);
  printf("%5s %7d %5d %5d %5d %5d\n", ff, 85, 30, 30, f, avg6);
  printf("%5s %7d %5d %5d %5d %5d\n", gg, 85, 30, 30, g, avg7);
  printf("%5s %7d %5d %5d %5d %5d\n", hh, 85, 30, 30, h, avg8);
  printf("%5s %7d %5d %5d %5d %5d\n", ii, 85, 30, 30, i, avg9);
  printf("%5s %7d %5d %5d %5d %5d\n", jj, 85, 30, 30, j, avg10);
  printf("평  균%8d %5d %5d %5d\n", 85, 30, 30, avg11);
  printf("---------------------------------------------\n");
  return 0;
}