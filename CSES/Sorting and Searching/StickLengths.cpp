#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// 2 3 1 5 2
// I think this is a binary search problem.
// choose an initial value that is v large, then
// calculate the cost if all the sticks were to have
// this value. Use BS to find minimum of cost function
// k-2, k-1, k, k+1, k+2, ...
// f(k) < f(k+1) and f(k) < f(k-1)
 
// find largest value of x such that f(x) > f(x+1)
 
ll cost(vector<ll> a, ll x) {
    ll cost = 0;
    for (int i = 0; i < a.size(); i++) {
        cost += abs(a[i] - x);
    }
    return cost;
}
 
int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll x = -1;
    for (ll b = LLONG_MAX; b >= 1; b /= 2) {
        while (cost(a, x+b) > cost(a, x+b+1)) x += b;
    }
    cout << cost(a, x+1) << "\n";
}