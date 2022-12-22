#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int INF = 1e7;
 
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    vector<int> dp(1e6+1);
    for (int i = 1; i <= x; i++) {
        dp[i] = INF;
        for (auto c : coins) {
            if (i-c >= 0) {
                dp[i] = min(dp[i], dp[i-c]+1);
            }
        }
    }
    cout << (dp[x] == INF ? -1 : dp[x]) << "\n";
}