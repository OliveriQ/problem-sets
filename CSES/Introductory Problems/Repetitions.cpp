#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = 0;
    int up = 0;
    char curr = ' ';
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == curr) cnt++;
        else {
            up = max(up, cnt);
            cnt = 1;
            curr = s[i];
        }
    }
    up = max(up, cnt);
    cout << up << "\n";
}