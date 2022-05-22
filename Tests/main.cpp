/* This file is used for testing/compiling solutions */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int ans = 0;
    int x=0, y=1, z=0;
    while (z < 4000000) {
        z = x + y;
        x = y;
        y = z;
        if (z % 2 == 0) {
            ans += z;
        }
    }
    cout << ans << "\n";
}