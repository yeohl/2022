#include <iostream>
using namespace std;

int main() {

	int n; 
	cin >> n;

	int* array = new int[n]; 

	
	
	for (int i = 0; i < n; i++) {
		cin >> array[i]; 

	}

	int min = array[0]; 

	for (int j = 0; j < n; j++) {
		if (array[j] < min) {
			min = array[j];
		}

	}


	cout << "최소값: "<< min << endl;
	

}
