#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        long long n;
        cin >> n;
 
        vector<long long> ans;
        long long cur = 10;
 
        while(cur + 1 <= n)
        {
            if(n % (cur + 1) == 0)
                ans.push_back(n / (cur + 1));
 
            if(cur > 1e17) break;
            cur *= 10;
        }
 
        sort(ans.begin(), ans.end());
 
        cout << ans.size() << '
';
 
        for(auto x : ans)
            cout << x << " ";
 
        if(ans.size()) cout << '
';
    }
}