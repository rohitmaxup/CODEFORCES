#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
 
        vector<int> v(n*k);
        for(int i = 0; i < n*k; i++)
            cin >> v[i];
 
        int mid = (n + 1) / 2;
        int step = n - mid + 1;
 
        int i = n*k - step;
        long long sum = 0;
 
        for(int cnt = 0; cnt < k; cnt++)
        {
            sum += v[i];
            i -= step;
        }
 
        cout << sum << '
';
    }
    return 0;
}