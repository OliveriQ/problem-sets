#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s; cin >> s;
    vector<int> a(26);
    for (int i = 0; i < s.size(); i++) {
        a[s[i] - 'A']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] % 2 == 1) odd++;
    }
    string ans = "";
    if (s.size() % 2 == 0 && odd == 0) {
        for (int i = 0; i < 26; i++) {
            ans += string(a[i] / 2, 'A' + i);
        }
        
        for (int i = 25; i >= 0; i--) {
            ans += string(a[i] / 2, 'A' + i);
        }
        
        cout << ans << "\n";
    }
    else if (s.size() % 2 == 1 && odd == 1) {
        for (int i = 0; i < 26; i++) {
            if (a[i] % 2 == 0) {
                ans += string(a[i] / 2, 'A' + i);
            }
        }
        for (int i = 0; i < 26; i++) 
            if (a[i] % 2 == 1) {
                ans += string(a[i], 'A' + i);
            }
        
        for (int i = 25; i >= 0; i--) {
            if (a[i] % 2 == 0) {
                ans += string(a[i] / 2, 'A' + i);
            }
            
        }
        cout << ans << "\n";
    }
    else cout << "NO SOLUTION\n";
}