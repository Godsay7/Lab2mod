#include <iostream>
using namespace std;

void main() {
	int arr1[10];
	int arr2[10];
	int arr3[10];
	for (int i = 0; i < 10; i++) {
		arr1[i] = 2 * i + 40;
	}
	for (int i = 0; i < 10; i++) {
		arr2[i] = 52 - 2 * i;
	}
	
	int k = 0; // ������� ����� ������� � ������� �� ������� �������
	for (int i = 0; i < 10; i++)//��������� ����, ������ �� ������� ������
	{
		for (int j = 0; j < 10; j++)//��������� ����, ������ �� ������� ������
		{
			if (arr1[i] == arr2[j])//�������� �� ������� ������� � ������� �� ������� �������
			{
				arr3[k] = arr1[i];//��������� �������� �������� ������, ��� ������� � ������ ���� �������
					k++;//��������� ������� ����� �������
				break;// ����� � ����������� �����
			}
		}
	}

	int max = arr3[0];
	for (int i = 0; i < 9; i++) {
		if (arr3[i] > max) {  // ��������, �� � ����� ����������
			max = arr3[i];
		}
	}
	cout << "The largest code has a number: " << max;
}