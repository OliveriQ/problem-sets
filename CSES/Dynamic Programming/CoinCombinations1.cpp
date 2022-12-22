#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int M = 1e9+7;
 
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    vector<int> dp(1e6+1);
    dp[0] = 1;
    for (int i = 1; i <= x; i++) {
        for (auto c : coins) {
            if (i-c >= 0) {
                dp[i] += dp[i-c];
                dp[i] %= M;
            }
        }
    }
    cout << dp[x] << "\n";
}