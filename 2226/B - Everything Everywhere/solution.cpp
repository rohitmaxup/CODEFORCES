#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
 
        long long ans = 0;
 
        for (int i = 0; i + 1 < n; i++) {
            if (abs(p[i] - p[i + 1]) == gcd(p[i], p[i + 1]))
                ans++;
        }
 
        cout << ans << '
';
    }
 
    return 0;
}