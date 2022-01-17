#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	cout << count << endl;
}