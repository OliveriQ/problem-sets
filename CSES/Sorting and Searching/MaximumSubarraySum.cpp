#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll curr_max = 0, ans = -(1e9 + 1);
    for (int i = 0; i < n; i++) {
        curr_max = max(a[i], curr_max+a[i]);
        ans = max(curr_max, ans);
    }
    cout << ans << "\n";
}