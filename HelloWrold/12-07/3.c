#include <stdio.h>
int main(void) {
  int a;//���⿡ ���� a, �Ǽ� B�� �����ϼ���
  float b;

  printf("������ �Է��Ͻÿ� : ");
  scanf("%d", &a);     //scanf�� ����Ͽ� a, b�� ���� �Է¹�������
  printf("�Ǽ��� �Է��Ͻÿ� : ");
  scanf("%f", &b);     //scanf�� ����Ͽ� a, b�� ���� �Է¹�������
  printf("���� : %d, �Ǽ��� %f", a, b);      //���� �� �Ǽ��� ����ϼ���
  
  return 0;
  }