#include <bits/stdc++.h>
using namespace std;

int main() {
    uint64_t n;
    cin >> n;
    for (uint64_t k = 1; k <= n; k++) {
        cout<<(k*k*(k*k-1))/2-4*(k-2)*(k-1)<<"\n";
    }
}