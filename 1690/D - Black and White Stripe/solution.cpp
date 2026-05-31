#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        string s;
        cin >> s;
 
        int cnt = 0;
 
        // count W in first window
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                cnt++;
        }
 
        int ans = cnt;
 
        // slide the window
        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
                cnt++;
 
            if (s[i - k] == 'W')
                cnt--;
 
            ans = min(ans, cnt);
        }
 
        cout << ans << '
';
    }
 
    return 0;
}