#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    string s;
    cin >> s;
    vector<string> perms;
    sort(s.begin(), s.end());
    do {
        perms.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << perms.size() << "\n";
    for (int i = 0; i < perms.size(); i++) {
        cout << perms[i] << "\n";
    }
}