#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int random, i, n, m, o, p;
  char str[504] = {"���ο��������±�����輺�ϱ迬�������ϳ뵵�������̹ڱ�ȯ�ڼ���ڽ������ǿ����ȭ�̹����̺����̼����̿����������������Ӽ����ӿ�ȿ��ȫ����������������ö���ֹμ�������"};
  
  

  
  srand(time(NULL));
  n = (rand() % 28)*6;           // �и�����1
  printf("�и�����1 : %c%c%c%c%c%c\n", str[n], str[n+1], str[n+2], str[n+3], str[n+4], str[n+5]);
  

  m = (rand() % 28)*6;
  while (n==m)                        // �и����� 1�� 2�� ������ �ѹ� �� ���� �Լ� ���
  {
    m = (rand() % 28)*6;
  }

  printf("�и�����2 : %c%c%c%c%c%c\n", str[m], str[m+1], str[m+2], str[m+3], str[m+4], str[m+5]);


  o = (rand() % 28)*6;
  while ((n==o) || (m==o))                  
  {      
    o = (rand() % 28)*6;               // ���Ⱑ �и����� 1or2�� ������ �ѹ� �� ���� �Լ� ���
  }
  printf("��     �� : %c%c%c%c%c%c\n", str[o], str[o+1], str[o+2], str[o+3], str[o+4], str[o+5]);
  
  p = (rand() % 28)*6;
  while ((n==p) || (m==p) || (o==p))                  
  {
    p = (rand() % 28)*6;
  }

  printf("��     �� : %c%c%c%c%c%c\n", str[p], str[p+1], str[p+2], str[p+3], str[p+4], str[p+5]);

  return 0;
}