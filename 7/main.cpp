#include <iostream>

using namespace std;

int main(){
	srand((unsigned) time(NULL));
	int arraySize;
	cin >> arraySize;
	int nums[arraySize];

	for (int i = 0; i < arraySize; ++i) {
		nums[i] = 1 + (rand() % 10);	// random generated array
	}

	for (int i = 0; i < arraySize; ++i) {
		cout << nums[i] << " " ;	// array output
	}
	int minVal = 100; // minimal value for pairs (default: 100)
	for (int i = 0; i < arraySize - 1; ++i) {
		if (nums[i] + nums[i+1] < minVal) {
			minVal = nums[i] + nums[i+1];
		}
	}
	cout << "\n" << minVal;
}
