#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int M = 1e9+7;
 
int main() {
    int n;
    cin >> n;
    vector<int> dp(1e6+1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i-j >= 0) {
                dp[i] += dp[i-j];
                dp[i] %= M;
            }
        }
    }
    cout << dp[n] << "\n";
}