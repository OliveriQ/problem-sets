#include <bits/stdc++.h>
using namespace std;
 
// create map to store difference between each element and target
// each entry in the map should have key=difference, value=index of element
// if we find an element in the array that is equal to one of they keys 
// in the map, then we have found a solution
 
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int,int> mp;
    bool solved = false;
    for (int i = 0; i < n; i++) {
        if (mp.find(a[i]) != mp.end()) {
            cout << mp[a[i]]+1 << " " << i+1 << "\n";
            solved = true;
        }
        else mp.insert(make_pair(x - a[i], i));
        
    }
    if (!solved) cout << "IMPOSSIBLE\n";
}