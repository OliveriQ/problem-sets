#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n - 1; i++) {
        int k; cin >> k;
        a[k - 1] = k;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cout << i + 1 << "\n";
            break;
        }
    }
}