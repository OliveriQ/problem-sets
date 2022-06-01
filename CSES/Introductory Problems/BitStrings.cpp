#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
int main() {
    uint64_t n, ans=1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ans = (ans * 2) % M;
    }
    cout << ans << "\n";
}