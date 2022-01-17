#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int k = num - 1; k > i; k--) {
                cout << " ";
          } 
       
       for (int j = 0; j <= 2*i; j++) {
            cout << '*';

        }
        cout << endl;
        
    }
    
}