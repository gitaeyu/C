#include <stdio.h>

int main(){
  int num1 = 100, num2 = 100;
  int *pnum;

  printf("%p \n",pnum); // 00400080 �̶�� �ּҰ��� ���� ��� *pnum�� �����Ⱚ�� ������ ������.

  pnum = &num1; // num1 �� �ּҰ��� pnum�� �Ҵ��Ѵ� ���� num1�� ���� ����Ű�� ��
  printf("%p \n",pnum); // pnum�� �ּҰ��� 0061FF18 num1�� �ּҰ��� ����
  printf("%p \n",&num1); // num1�� �ּҰ��� 0061FF18 
  printf("%d \n",*pnum); // �����Ͱ� ����Ű�� �޸𸮸� �����ϴ� ������ * �� �̿��Ͽ� num1�� ���� ����Ʈ �Ѵ�
  (*pnum)+=30; // pnum�� ����Ű�� ������ ���Ͽ� + 30�� ���ش� �� num1���� 30�� �����ִ°�
  printf("%d \n",num1); // num1�� �� ����Ʈ 130 �� ���´�
  printf("%d \n",*pnum); // num1�� �� ����Ʈ 130 �� ���´�
  pnum = &num2; // pnum�� �ش��ϴ� ������ ���� num2�� �ּҰ����� �Ҵ�
  (*pnum)-=30; // pnum�� ����Ű�� ���� num2 �� ���� -30 ���ش�.
  printf("%p \n",pnum); // num2�� �ּҰ� ����Ʈ
  printf("%d \n",*pnum); // num2�� �� ����Ʈ
  printf("num1 : %d, num2 : %d",num1,num2);

  return 0;
}