#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; 
	getline(cin, str);

	char n; 
	cin >> n;

	int count = 0;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == n) {
			count++;
		}
	}
	cout << count << endl;
}
