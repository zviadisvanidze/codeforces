
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    int mtvleli = 0;
    char datskeba = 'a';

    for (int i=0; i<s.size(); i++){

        int pirdapir = abs(s[i] - datskeba);

        int ukugma = 26 - pirdapir;

        mtvleli += min(pirdapir, ukugma);

        datskeba = s[i];
    }

    cout << mtvleli << endl;
    return 0;
}

