#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        mp.insert(make_pair(a[i], i));
    }
    vector<int> b;
    for (auto key : mp) {
        b.push_back(key.second);
    }
    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (b[i]  < b[i-1]) ans++;
    }
    cout << ans << "\n";
}