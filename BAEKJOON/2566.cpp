#include <iostream>
using namespace std;


int main() {
    int arr[9][9];
    int max = 0;
    int save_i = 0, save_j = 0;

    for(int i = 0; i<9; i++){
     for(int j = 0; j<9; j++){
         cin >> arr[i][j];
         if(max < arr[i][j] ){
            max = arr[i][j];
            save_i = i;
            save_j = j;
         }
     }   
    }
    cout << max << '\n' << save_i+1 <<' '<< save_j+1;
