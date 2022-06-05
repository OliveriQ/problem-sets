#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (max(a, b) > min(a, b) * 2) {
            cout << "NO\n";
        } 
        else if (a % 3 == 0 && b % 3 == 0) {
            cout << "YES\n";
        }
        else if ((a+2) % 3 == 0 && (b+1) % 3 == 0) {
            cout << "YES\n";
        }
        else if ((a+1) % 3 == 0 && (b+2) % 3 == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}