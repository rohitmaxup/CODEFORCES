#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
 
        sort(v.begin(), v.end());
 
        int maxLen = 1, currLen = 1;
 
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i-1] <= k) {
                currLen++;
            } else {
                currLen = 1;
            }
            maxLen = max(maxLen, currLen);
        }
 
        cout << n - maxLen << "
";
    }
}