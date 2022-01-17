#include <iostream>
using namespace std;

int Min(int a, int b) {
	
	if (a > b) {
		 return b;
	}
	
}

int main() {
	int a, b;

	cin >> a >> b;
	cout << Min(a, b);

}
