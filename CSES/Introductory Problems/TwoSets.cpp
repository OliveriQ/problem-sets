#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    if (n == 1) cout << "NO\n";
    else if (n % 2 == 0 && n % 4 != 0) cout << "NO\n";
    else if (n % 2 == 1 && (n+1) % 4 != 0) cout << "NO\n";
    else {
        cout << "YES\n";
        set<int> a, b;
        if (n % 2 == 0) {
            for (int i = n; i >= n/2 + 1; i--) {
                if (i % 2 == 0) {
                    a.insert(i); a.insert(n + 1 - i);
                }
                else {
                    b.insert(i); b.insert(n + 1 - i);
                }
            }
        }
        else if (n % 2 == 1) {
            a.insert(n);
            for (int i = n - 1; i >= n/2 + 1; i--) {
                if (i % 2 == 0) {
                    b.insert(i); b.insert(n - i);
                }
                else {
                    a.insert(i); a.insert(n - i);
                }
            }
        }
        cout << a.size() << "\n";
        for (auto e : a) cout << e << " ";
        cout << "\n" << b.size() << "\n";
        for (auto e : b) cout << e << " ";
        cout << "\n";
    }
}