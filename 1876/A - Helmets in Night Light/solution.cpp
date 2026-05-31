#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        long long n, p;
        cin >> n >> p;
 
        vector<long long> a(n), b(n);
 
        for(int i = 0; i < n; i++)
            cin >> a[i];
 
        for(int i = 0; i < n; i++)
            cin >> b[i];
 
        vector<pair<long long,long long>> v;
 
        for(int i = 0; i < n; i++)
            v.push_back({b[i], a[i]});
 
        sort(v.begin(), v.end());
 
        long long ans = p;
        long long cnt = 1;
 
        for(auto x : v)
        {
            long long cost = x.first;
            long long people = x.second;
 
            if(cost >= p)
                break;
 
            if(cnt + people > n)
            {
                ans += (n - cnt) * cost;
                cnt = n;
                break;
            }
 
            ans += people * cost;
            cnt += people;
        }
 
        ans += (n - cnt) * p;
 
        cout << ans << "
";
    }
 
    return 0;
}