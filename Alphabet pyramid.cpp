#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        char ch = 'A';
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << ch;
            ch++;
        }
        ch -= 2;
        for (int l = 1; l < i; l++) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
    return 0;
}

