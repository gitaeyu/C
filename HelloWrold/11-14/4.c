#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
  char str[]="good morning!";
  printf("�迭 str�� ũ�� : %d \n", sizeof(str));
  printf("�� ���� ������ ��� : %c \n", sizeof(13));
  printf("�� ���� ������ ��� : %d \n", sizeof(13));

  str[12]='?';

  printf("���ڿ� ��� : %s \n", str);


  return 0;


}
