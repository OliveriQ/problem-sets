#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n-1; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size()-1; i++) {
        if (v[i+1]-v[i] > 1) {
            cout << (v[i]+v[i+1])/2 << "\n";
            break;
        } else if (i == v.size()-2) {
            cout << n << "\n";
        }
    }
}