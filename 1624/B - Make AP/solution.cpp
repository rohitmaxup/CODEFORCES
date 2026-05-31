#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
 
        bool ok = false;
 
        // Case 1: modify a
        long long x = 2*b - c;
        if (x > 0 && x % a == 0) ok = true;
 
        // Case 2: modify b
        long long y = a + c;
        if (y % (2*b) == 0) ok = true;
 
        // Case 3: modify c
        long long z = 2*b - a;
        if (z > 0 && z % c == 0) ok = true;
 
        cout << (ok ? "YES
" : "NO
");
    }
}