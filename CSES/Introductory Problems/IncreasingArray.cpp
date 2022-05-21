#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    uint64_t cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n-1; i++) {
        if (v[i+1]<v[i]) {
            cnt += v[i]-v[i+1];
            v[i+1] = v[i];
        }
    }
    cout << cnt << "\n";
}