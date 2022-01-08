#include <iostream> 
#include <string> 
using namespace std; 

int main() {
	int n, len, count; 
	string str; 

	cin >> n; 
	cin >> str;

	count = 0;

	while (n--) { 
		getline(cin, str);
		len = str.size();
		
		for (int i = 0; i < len; i++) {
			if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') { 
				cout << str[i];
				count++;
			} 
			
		} 
		if (count == 0) {
			cout << "???";
		}
		
		cout << endl;
	} 
	return 0; 
}

