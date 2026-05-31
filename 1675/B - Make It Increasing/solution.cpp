#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
 
        long long count = 0;
        bool impossible = false;
 
        for (int i = n - 1; i >= 1; i--)
        {
            if (v[i - 1] >= v[i])
            {
                int ops = 0;
 
                while (v[i - 1] >= v[i])
                {
                    v[i - 1] >>= 1;
                    ops++;
 
                    if (v[i - 1] == 0 && v[i] == 0)
                    {
                        impossible = true;
                        break;
                    }
                }
 
                count += ops;
            }
 
            if (impossible) break;
        }
 
        if (impossible)
            cout << -1 << endl;
        else
            cout << count << endl;
    }
}