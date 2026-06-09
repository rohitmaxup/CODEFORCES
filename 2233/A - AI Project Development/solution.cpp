#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
 
        long long ans1 = (n + x + y - 1) / (x + y);
        long long ans2;
 
        if (x * z >= n) {
            ans2 = (n + x - 1) / x;
        } else {
            long long rem = n - x * z;
            ans2 = z + (rem + x + 10 * y - 1) / (x + 10 * y);
        }
 
        cout << min(ans1, ans2) << '
';
    }
 
    return 0;
}