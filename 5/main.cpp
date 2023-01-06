#include <iostream>

using namespace std;

int main(){
	srand((unsigned) time(NULL));
	int array_size;
	cin >> array_size;
	int nums[array_size];

	for (int i = 0; i < array_size; ++i) {
		nums[i] = 1 + (rand() % 4);	// random generated array
	}

	int low = nums[0]; // applying numbers from low and end levels
	int end = nums[array_size - 1];
	int low_c = 0, end_c = 0;
	
	cout << "low = " << low << endl;
	cout << "end = " << end << endl;

	for (int i = 0; i < array_size; ++i) {
		if (nums[i] % low == 0) {
			++low_c;
		}
		if (nums[i] % end == 0) {
			++end_c;
		}
		cout << nums[i] << " " ;	// array output
	}

	cout << "\nLow = " << low_c << endl;
	cout << "End = " << end_c << endl;
}
