#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (max(a, b) <= 2 * min(a, b)) {
            int k =  2 * min(a, b) - max(a, b);
            if (k == 0 || k % 3 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
}