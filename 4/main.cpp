#include <iostream>

using namespace std;

int main(){
	int nums[3] = {1, 3, 1};
	for (int i = 0; i < sizeof(nums) / sizeof(nums[i]); ++i) {
		cout << nums[i] << "\t";
	}
}
