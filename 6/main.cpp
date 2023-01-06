#include <iostream>

using namespace std;

int main(){
	srand((unsigned) time(NULL));
	int array_size;
	cin >> array_size;
	int nums[array_size];

	for (int i = 0; i < array_size; ++i) {
		nums[i] = 1 + (rand() % 10);	// random generated array
	}
	
	for (int i = 0; i < array_size; ++i) {
		cout << nums[i] << " " ;	// array output
	}
	
	int answer = 0;
	for (int i = 0; i < array_size - 1; ++i) {
		answer += nums[i] * i - nums[i+1] * i+1;
		cout << "\n" << answer;
	}
//	cout << "\n" << answer;
}
