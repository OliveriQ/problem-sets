#include <bits/stdc++.h>
using namespace std;
 
// 45, 60, 60, 80
// 30, 60, 75
 
// 45 - 30 = 15 > 5
 
 
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end()); 
    sort(b.begin(), b.end());
    int l = 0, r = 0, ans = 0;
    while (l < n && r < m) {
        if (a[l] - b[r] > k) r++; 
        else if (a[l] - b[r] < -k) l++;
        else {
            l++; r++; ans++;
        }
    }
    cout << ans << "\n";
 
}