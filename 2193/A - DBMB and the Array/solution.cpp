#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
 
        int sumA = 0;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            sumA += val;
        }
 
        if (sumA == s) {
            cout << "YES
";
        }
        else if (sumA > s) {
            cout << "NO
";
        }
        else {
            int diff = s - sumA;
            if (diff % x == 0) cout << "YES
";
            else cout << "NO
";
        }
    }
 
    return 0;
}