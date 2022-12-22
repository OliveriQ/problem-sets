#include <bits/stdc++.h>
using namespace std;
 
int main() {
    uint64_t n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        n = n % 2 == 1 ? 3 * n + 1 : n / 2;
    }
    cout << 1 << "\n";
}