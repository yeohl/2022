#include <iostream>
using namespace std;

int main() {
    int num, check = 0, result = 0;
    cin >> num;
    int k;
    cin >> k;

    
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            ++check;
            if(check == k){
                result = i;
                break;
            }
        }

        
    }

    if(check < k){
        result = 0;
    }

    cout << result <<'\n';
    return 0;
}
