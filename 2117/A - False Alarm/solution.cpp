#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, x;
        cin >> n >> x;
 
        bool btn = false;
        int count = 0;
 
        vector<int> v(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        int last1 = -1;
 
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                last1 = i;
            }
        }
 
        for (int i = 0; i <= last1; i++)
        {
            if (v[i] == 0)
            {
                if (!btn)
                {
                    continue;
                }
                else
                {
                    count--;
                }
            }
 
            else if (v[i] == 1)
            {
                if (!btn)
                {
                    btn = true;
                    count = x - 1;
                }
                else
                {
                    count--;
                }
            }
        }
 
        if (count >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}