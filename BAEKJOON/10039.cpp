#include <iostream>
using namespace std;

int main() {

  int str[5];
  int sum = 0;

   for(int i = 0; i<5; i++){
       cin >> str[i];

       if(str[i] < 40){
           str[i] = 40;
       }

       sum+=str[i];
   }

    cout << sum / 5;
    
}
