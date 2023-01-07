#include <iostream>

using namespace std;

int main(){
	srand((unsigned) time(0)); // for random nums

	int arraySizeY, arraySizeX;
	int nums[arraySizeY][arraySizeX];
	cout << "Print X: ";
	cin >> arraySizeX;
	cout << "Print Y: ";
	cin >> arraySizeY;
	
	for (int i = 0; i < arraySizeY; ++i) { // giving random values for matrix
		for (int j = 0; j < arraySizeX; ++j) {
			nums[i][j] = (1 + (rand() % 10));
		}
	}
	
	int randomVal = 1 + (rand() % arraySizeX);

	for (int i = 0; i < arraySizeY; ++i) { 
			nums[i][randomVal] = 0;	 // counter for giving 1 zero on one line
		}									 

	for (int i = 0; i < arraySizeY; ++i) { // printing matrix
		cout << endl;
		for (int j = 0; j < arraySizeX; ++j) {
			cout << nums[i][j] << " ";
		}
	}
	
	
}
