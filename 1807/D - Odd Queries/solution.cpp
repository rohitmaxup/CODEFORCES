#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, q;
        cin >> n >> q;
 
        vector<long long> a(n), pref(n);
 
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            pref[i] = a[i] + (i ? pref[i-1] : 0);
        }
 
        long long total = pref[n-1];
 
        while(q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
 
            l--; r--;
 
            long long range = pref[r] - (l ? pref[l-1] : 0);
 
            long long newSum = total - range + 1LL * (r - l + 1) * k;
 
            if(newSum % 2)
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
}