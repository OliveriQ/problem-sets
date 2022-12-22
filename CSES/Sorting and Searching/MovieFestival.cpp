#include <bits/stdc++.h>
using namespace std;
 
// sort pairs with respect to ending value
// then pick the next available movie 
// iterate from left to right, O(n)
// (3, 5), (4, 9), (5, 8)
// store pairs in the form (end, start)
 
int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].second >> a[i].first;
    }
    sort(a.begin(), a.end());
    int ans = 0, end = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].second >= end) {
            end = a[i].first; ans++;
        }
    }
    cout << ans << "\n";
}