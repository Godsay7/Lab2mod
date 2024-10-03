#include <iostream>
using namespace std;

int main() {
	int arr[4][5]{
		{1, 7, 4, 9, 3},
		{-5,8,-6, 2, 4},
		{9,-1,12,-7,-15},
		{7, 1, 2, 3, 5} };
	int arr1[5] = {1,1,1,1,1};
	int var1 = 1;
	int counter = 0;
	int a = 1;
	for (int n = 0; n < 5; n++) {
		for (int i = 0; i < 4; i++) {
			if (arr[i][n] > 0) {
				var1 = arr[i][n];
				arr1[counter] *= var1;
			}
		}
		counter++;
	}
	cout << arr1[0] << endl << arr1[1] << endl << arr1[2] << endl << arr1[3] << endl << arr1[4] << endl;
	return 0;
}