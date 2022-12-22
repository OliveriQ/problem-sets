#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    int ans = 0, k = 5;
    while (k <= n) {
        ans += n / k;
        k *= 5;
    }
    cout << ans << "\n";
}