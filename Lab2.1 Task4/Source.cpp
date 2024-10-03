#include <iostream>
using namespace std;

int main() {
	float arr[5][4]{
		{1.5, 7,  4, 9},
		{-5, 8.7,-6,2.2},
		{ 9, -1, 12,-7},
		{ 7,  1,  2,  3},
		{ 3,  4, -5, 15} };
	float arr1[4];
	int counter = 0;
	float var1 = 0;
	for (int n = 0; n < 4; n++) {
		float sum = 0;
		int counter1 = 0;
		for (int i = 0; i < 5; i++) {
			if (arr[i][n] > 0) {
				var1 = arr[i][n];
				sum += var1;
				counter1++;
				arr1[n] = sum / counter1;
			}
		}
		counter++;
	}
	cout << "Arithmetic mean of the 1 column: " << arr1[0] << endl;
	cout << "Arithmetic mean of the 2 column: " << arr1[1] << endl;
	cout << "Arithmetic mean of the 3 column: " << arr1[2] <<  endl;
	cout << "Arithmetic mean of the 4 column: " << arr1[3] <<  endl;
	return 0;
}