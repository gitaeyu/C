#include <stdio.h>


int main()
{
  int arr1[3] = {1,2,3}; // ���̰� 3�� int�� ������ ��� �迭 ����
  double arr2[3] = {1.1,2.2,3.3}; // ���̰� 3�� double�� ������ ���迭 ����

  printf("%d, %g \n", *arr1, *arr2); //arr1�� arr2�� ����Ű�� ����� ����Ѵ�. �� �迭�� ù��° ��Ҹ� ���
  *arr1 +=100; // arr1�� ����Ű�� ������ +100�� ���ش� �� arr1[0] +=100
  *arr2 +=120.5; // arr2�� ����Ű�� ������ +100�� ���ش� �� arr2[0] +=120.5
  printf("%d %g \n", arr1[0], arr2[0]);
  printf("%d %g \n", arr1[1], arr2[1]);
  printf("%d %g \n", arr1[2], arr2[2]);
  return 0;
}