#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
int memo[105][105];
int n;
int a[105];
 
int dp(int i, int p) {
    if (i >= n) return 0;
    if (memo[i][p] != -1) return memo[i][p];
 
    int ans;
    if (p == n) {
        ans = a[i] + dp(i + 1, i);
    } else {
        int x = a[p];
        if (a[i] >= x) {
            ans = min(x + dp(i + 1, p), a[i] + dp(i + 1, i));
        } else {
            ans = a[i] + dp(i + 1, i);
        }
    }
 
    return memo[i][p] = ans;
}
 
void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    memset(memo, -1, sizeof(memo));
    cout << dp(0, n) << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}