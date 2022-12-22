#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> a;
    for (int i = 0; i < n; i++) {
        int k; cin >> k; a.insert(k);
    }
    for (int i = 0; i < m; i++) {
        int k; cin >> k;
        auto it = a.upper_bound(k);
        if (it == a.begin()) {
            cout << -1 << "\n";
        }
        else {
            it--;
            cout << *it << "\n";
            a.erase(it);
        }
    }
}