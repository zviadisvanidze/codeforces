#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    int mtvleli = 0;
    char datskeba = 'a';

    for(char c : s){

        int pirdapir = abs(c - datskeba);
        int ukugma = 26 - pirdapir;
        mtvleli += min(pirdapir, ukugma);
        datskeba = c;
    }

    cout << mtvleli << endl;
    return 0;
}

