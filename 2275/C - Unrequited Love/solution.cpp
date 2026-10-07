#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
    int m = n - 4;
    vector<long long> v(m);
 
    for (int i = 0; i < m; i++) {
        v[i] = a[i] + a[i + 2] - a[i + 4];
    }
 
unordered_map<long long, long long> freq;
 
long long ans = 0;
 
for (int i = 0; i < m; i++) {
    ans += freq[v[i]];
    freq[v[i]]++;
}
for (int i = 2; i < m; i++) {
    if (v[i] == v[i - 2]) {
        ans--;
    }
}
for (int i = 4; i < m; i++) {
    if (v[i] == v[i - 4]) {
        ans--;
    }
}
cout << ans << '
';
}
return 0;
}