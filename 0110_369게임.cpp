#include <iostream>
using namespace std;

int main() {

	int count = 0; 
	int N; 

	cin >> N;

	for (int i = 1; i <= N; i++) {

		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9|| i / 10 == 3 || i / 10 == 6 || i / 10 == 9) { 
			count++;
		}else if ((i % 10 == 3 || i % 10 == 6 || i % 10 == 9) && (i / 10 == 3 || i / 10 == 6 || i / 10 == 9)) { 
			count++;
		}

	}
	cout << count << endl;

}
