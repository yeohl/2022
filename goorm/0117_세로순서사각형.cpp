#include <iostream>
using namespace std;

int main() {
	int n;
	int num = 1;
	int count = 1;
	
	cin >> n;

	if (n > 20) {
		cout << "20 이하의 자연수 입력" << endl;
	}

	for (int i = 0; i < n; i++) {
		num = count;
		for (int j = 0; j < n; j++) {

			num += n;
			cout << num-n << " ";
			}
		count++;
		cout << endl;
		}
	}