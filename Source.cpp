#include <iostream>

using namespace std;
//void main() {
//
//	int arr[5] = {2,4,6,8,10};
//	int arr[5];
//	arr[0] = 2;
//	arr[1] = 4;
//	arr[2] = 6;
//	arr[3] = 8;
//	arr[4] = 10;
//	for (int i = 0; i < 5; i++) {
//		arr[i] = arr[i] * 10;
//	}
//} 

void main() { //task1
	int arr1[8];
	for (int i = 0; i < 9; i++) {
		if (i % 2 == 0) {
			arr1[i] = 2 * i - 44;
		} else {
			arr1[i] = i - 3;
		}
	}
	int size = 8;
	for (int i = 0; i < size - 1; i++)// визначаємо кількість проходів по масиву, для 8 елементів кількість проходів буде 7
	{
		for (int j = 0; j < size - i - 1; j++)// перебираємо елементи в масиві
		{
			if (arr1[j] > arr1[j + 1])//якщо лівий елемент більший за правий, то міняємо їх місцями
			{
			int temp = arr1[j];
			arr1[j] = arr1[j + 1];
			arr1[j + 1] = temp;
			}
		}
	}
}

