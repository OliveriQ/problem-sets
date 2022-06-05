#include <bits/stdc++.h>
using namespace std;
int main() {
    uint64_t n;
    cin >> n;
    int sum = (n*(n+1))/2;
    if (sum % 2 == 0) {
        cout << "YES\n";
        vector<int> a, b;
        if (n % 4 == 0) {
            for (int i = 0; i < n/2; i++) {
                if (i % 2 == 0) {
                    a.push_back(i+1);
                    a.push_back(n-i);
                }
                else {
                    b.push_back(i+1);
                    b.push_back(n-i);
                }
            }
        }
        else if (n % 4 == 3) {
            for (int i = 0; i < n/2; i++) {
                if (i % 2 == 0) {
                    a.push_back(i+1);
                    a.push_back(n-i-1);
                }
                else {
                    b.push_back(i+1);
                    b.push_back(n-i-1);
                }
            }
            b.push_back(n);
        }
        cout << a.size() << "\n";
        for (auto i : a) cout << i << " ";
        cout << "\n" << b.size() << "\n";
        for (auto i : b) cout << i << " ";
        cout << "\n";
    }
    else cout << "NO\n";
}