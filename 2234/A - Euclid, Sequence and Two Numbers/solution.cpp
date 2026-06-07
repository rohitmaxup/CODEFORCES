#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        vector<long long> v(n);
 
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        sort(v.begin(), v.end(), greater<long long>());
 
        bool possible = true;
 
        if(n > 2)
        {
            for(int i = 0; i < n - 1; i++)
            {
                if(v[i] == v[i + 1])
                {
                    possible = false;
                    break;
                }
            }
 
            for(int i = 0; i < n - 2 && possible; i++)
            {
                if(v[i] % v[i + 1] != v[i + 2])
                {
                    possible = false;
                }
            }
        }
 
        if(possible)
        {
            cout << v[0] << " " << v[1] << "
";
        }
        else
        {
            cout << -1 << "
";
        }
    }
 
    return 0;
}