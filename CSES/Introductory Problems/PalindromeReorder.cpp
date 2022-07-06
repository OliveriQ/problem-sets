#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp.insert(make_pair(s[i],1));
        }
        else mp[s[i]]++;
    }
    int odds = 0, count = 0;
    string k = "", oddstr = "";
    for (auto key : mp) {
        if (key.second % 2 == 0) {
            k += string(key.second / 2, key.first);
        }
        else {
            odds++;
            count = key.second;
            oddstr = string(count, key.first);
        }
    }
    if (s.size() % 2 == 0 && odds > 0) {
        cout << "NO SOLUTION\n";
    }
    else if (s.size() % 2 == 1 && odds != 1) {
        cout << "NO SOLUTION\n";
    }
    else {
        string ans = k + oddstr;
        for (int i = k.size()-1; i >= 0; i--) {
            ans += k[i];
        }
        cout << ans << "\n";
    }
    
}