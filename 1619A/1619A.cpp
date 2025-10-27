#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=t-1; i>=0; i--) {
        string s;
        cin >> s;
        int n = s.size();

        if(n % 2 != 0) {
            cout << "NO\n";
            continue;
        }
        string first = s.substr(0, n/2);
        string second = s.substr(n/2);

        if(first == second) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
