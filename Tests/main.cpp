/* This file is used for testing/compiling solutions */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> h(n), t(m);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }
    sort(h.begin(), h.end());
    // binary search for each t(i)
    for (int i = 0; i < m; i++) {
        bool hit = false;
        int low = 0, high = n-1, ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (h[mid] == t[i]) {
                hit = true;
                ans = mid;
            }
            else if (h[mid] > t[i]) {
                high = mid - 1;
            }
            else if (h[mid] < t[i]) {
                low = mid + 1;
            }
        }
        if (ans == -1) {
            if (low - 1 >= 0) {
                if (h[low] > t[i]) {
                    ans = h[low-1];
                    h.erase(h.begin()+low-1);
                }
                else {
                    ans = h[low];
                    h.erase(h.begin()+low);
                }
            }
        }
        cout << ans << "\n";
    }
}