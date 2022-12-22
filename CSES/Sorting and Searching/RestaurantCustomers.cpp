#include <bits/stdc++.h>
using namespace std;
 
// (2, 4), (3, 9), (5, 8)
// 2 => +1 
// 4 => -1
// 3 => +1
// 9 => -1
// 5 => +1
// 8 => -1
 
int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n * 2);
    for (int i = 0; i < n * 2; i+=2) {
        cin >> a[i].first; a[i].second = 1;
        cin >> a[i+1].first; a[i+1].second = -1;
    }
    sort(a.begin(), a.end());
    int ans = 0, cnt = 0;
    for (int i = 0; i < n * 2; i++) {
        cnt += a[i].second; ans = max(ans, cnt);
    }
    cout << ans << "\n";
}