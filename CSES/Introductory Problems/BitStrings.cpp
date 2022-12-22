#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
 
int main() {
    int n; cin >> n;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        ans *= 2; ans = ans % M;
    }
    cout << ans % M << "\n";
}