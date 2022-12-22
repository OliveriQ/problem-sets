#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll range = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= range + 1) {
            range += a[i];
        }
        else break;
    }
    cout << range + 1 << "\n";
}