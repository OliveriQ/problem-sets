#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll ans = LLONG_MAX, total;
 
void subsets(vector<ll> &a, int i, ll sum) {
    if (i == a.size()) {
        ans = min(ans, abs(sum - (total - sum)));
        return;
    }
    subsets(a, i+1, sum+a[i]);
    subsets(a, i+1, sum);
}

 
int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 
    total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    subsets(a, 0, 0);
    cout << ans << "\n";
}