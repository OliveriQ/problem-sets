#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int ans = 0, cnt = 0;
    int l = 0, r = 0;
    while (l < s.size() && r < s.size()) {
        if (s[r] != s[l]) {
            ans = max(ans, cnt);
            l = r; cnt = 0;
        }
        else {
            cnt++; r++;
        }
    }
    cout << max(ans, cnt) << "\n";
}