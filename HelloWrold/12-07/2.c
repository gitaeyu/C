#include <stdio.h>
#include <stdlib.h>


char name[10];
int age;

int main()
{
  printf("�̸��� �Է� �Ͻÿ� : ");
  scanf("%s", &name);
  printf("���̸� �Է� �Ͻÿ� : ");
  scanf("%d", &age);
  printf("�̸��� %s, ���̴� %d �Դϴ�", name, age);

}