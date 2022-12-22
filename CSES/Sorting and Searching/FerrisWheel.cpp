#include <bits/stdc++.h>
using namespace std;
 
// x = 10
// [2, 3, 7, 9]
 
// check if a[l] + a[r] <= x
// if true, ans++, l++, r--
// if false, ans++, r--
 
// x = 7
// [1, 2, 3, 4, 5, 6]
 
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 0, r = n-1, ans = 0;
    while (l <= r) {
        if (a[l] + a[r] <= x) {
            ans++; l++; r--;
        } 
        else {
            ans++; r--;
        }
    }
    cout << ans << "\n";
}