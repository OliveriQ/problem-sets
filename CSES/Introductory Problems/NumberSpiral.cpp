#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        uint64_t r, c;
        cin >> r >> c;
        if (r > c) {
            if (r % 2 == 0) {
                cout << r * r - c + 1 << "\n";
            }
            else cout << (r - 1) * (r - 1) + c << "\n";
        }
        else {
            if (c % 2 == 1) {
                cout << c * c - r + 1 << "\n";
            }
            else cout << (c - 1) * (c - 1) + r << "\n";
        }
    }
}