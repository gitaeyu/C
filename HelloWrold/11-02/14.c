#include<stdio.h>

int main(void)
{
  int a, b, c, d, e, f, g, h, i, j;
  
  char aa[100], bb[100], cc[100], dd[100], ee[100], ff[100], gg[100], hh[100], ii[100], jj[100]; 
  
  printf("1. �̸� �Է� :");
  scanf("%s", &aa);
  printf("2. �̸� �Է� :");
  scanf("%s", &bb);
  printf("3. �̸� �Է� :");
  scanf("%s", &cc);
  printf("4. �̸� �Է� :");
  scanf("%s", &dd);
  printf("5. �̸� �Է� :");
  scanf("%s", &ee);
  printf("6. �̸� �Է� :");
  scanf("%s", &ff);
  printf("7. �̸� �Է� :");
  scanf("%s", &gg);
  printf("8. �̸� �Է� :");
  scanf("%s", &hh);
  printf("9. �̸� �Է� :");
  scanf("%s", &ii);
  printf("10. �̸� �Է� :");
  scanf("%s", &jj);




  printf("10���� �޹�ȣ�� ���ʴ�� �Է��Ͻÿ�.\n");
  printf("1. %s ��ȭ��ȣ ���ڸ� �Է� : ", aa);
  scanf("%d", &a);
  printf("2. %s ��ȭ��ȣ ���ڸ� �Է� : ", bb);
  scanf("%d", &b);
  printf("3. %s ��ȭ��ȣ ���ڸ� �Է� : ", cc);
  scanf("%d", &c);
  printf("4. %s ��ȭ��ȣ ���ڸ� �Է� : ", dd);
  scanf("%d", &d);
  printf("5. %s ��ȭ��ȣ ���ڸ� �Է� : ", ee);
  scanf("%d", &e);
  printf("6. %s ��ȭ��ȣ ���ڸ� �Է� : ", ff);
  scanf("%d", &f);
  printf("7. %s ��ȭ��ȣ ���ڸ� �Է� : ", gg);
  scanf("%d", &g);
  printf("8. %s ��ȭ��ȣ ���ڸ� �Է� : ", hh);
  scanf("%d", &h);
  printf("9. %s ��ȭ��ȣ ���ڸ� �Է� : ", ii);
  scanf("%d", &i);
  printf("10. %s ��ȭ��ȣ ���ڸ� �Է� : ", jj);
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


  printf("                ��   ��   ǥ                 \n");
  printf("---------------------------------------------\n");
  printf("%15s %5s %5s %5s %5s\n", "����", "����", "����", "C���", "���");
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
  printf("��  ��%8d %5d %5d %5d\n", 85, 30, 30, avg11);
  printf("---------------------------------------------\n");
  return 0;
}