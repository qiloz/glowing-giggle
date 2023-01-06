#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	srand((unsigned) time(NULL));
	int arraySizeX, arraySizeY;
	cout << "Print X: ";
	cin >> arraySizeX;
	cout << "Print Y: ";
	cin >> arraySizeY;
	int nums[arraySizeY][arraySizeX];

	for (int i = 0; i < arraySizeY; ++i) { // taking 0-values to matrix (for borders 1)
		for (int j = 0; j < arraySizeX; ++j) {
			if (i == 0 || i == arraySizeY - 1 || j == 0 || j == arraySizeX - 1) {
				nums[i][j] = 1;
			} else {
				nums[i][j] = 0;
			}
		}
	}
	
	for (int i = 0; i < arraySizeY; ++i) {
		cout << "\n";
		for (int j = 0; j < arraySizeX; ++j) {
			cout << nums[i][j] << " " ;	// array output
		}
	}
}
