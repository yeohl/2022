#include <iostream>
using namespace std;


int main() {
    int j, s;
    int day;


    cin >> j >> s;
    cin >> day;

    for (int i = 1; i <= day; i++) {
        if (i % 2 == 0) { // 짝수일때 선우-->진우
            int tmp1 = s / 2;
            int tmp2 = s % 2;
            s /= 2;

            j += (tmp1+tmp2);
        }
        else { // 홀수일때 진우-->선우
            int tmp1 = j / 2;
            int tmp2 = j % 2;
            j /= 2;

            s += (tmp1 + tmp2);
        }
    }
    cout << "진우 " << j << ", " << "선우 " << s;
}
