#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    int l = 0, h = n-1, ans = 0;
    while (l <= h) {
        if (p[l] + p[h] <= x) {
            l++; h--;
            ans++;
        }
        else {
            h--; ans++;
        }
    }    
    cout << ans << "\n";
}