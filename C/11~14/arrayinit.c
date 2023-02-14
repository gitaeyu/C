#include <stdio.h>

int main(void)
{
  int arr1[5] = {1,2,3,4,5};  // �迭�� ���̰� 5�� arr1 ���� �� �ʱ�ȭ
  int arr2[] = {1,2,3,4,5,6,7}; // �迭�� ���̸� �������� �ʰ� �ʱ�ȭ �̷��ԵǸ� ���̴� 7�� ���������.
  int arr3[5] = {1,2}; // �迭�� ���̰� 5�̹Ƿ� arr3[0] = 1 , arr3[2] = 2 
  int ar1Len, ar2Len, ar3Len, i;

  printf("�迭 arr1�� ũ�� : %d \n", sizeof(arr1)); // int�� ������ 5�� ���� �迭�̹Ƿ� ũ��� 4*5�� 20
  printf("�迭 arr2�� ũ�� : %d \n", sizeof(arr2)); // int�� ������ 5�� ���� �迭�̹Ƿ� ũ��� 4*7�� 28
  printf("�迭 arr3�� ũ�� : %d \n", sizeof(arr3));

  ar1Len = sizeof(arr1) / sizeof(int); // �迭 arr1�� ���� ���
  ar2Len = sizeof(arr2) / sizeof(int); // �迭 arr2�� ���� ���
  ar3Len = sizeof(arr3) / sizeof(int); // �迭 arr3�� ���� ���

  for(i=0; i<ar1Len; i++)
    printf("%d ", arr1[i]);
  printf("\n");

  for(i=0; i<ar2Len; i++)
    printf("%d ", arr2[i]);
  printf("\n");

  for(i=0; i<ar3Len; i++)
    printf("%d ", arr3[i]);
  printf("\n");

  return 0;
}