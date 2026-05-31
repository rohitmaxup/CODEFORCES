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
 
        vector<int> v(n);
 
        int cnt_m1 = 0;
        int cnt_0 = 0;
 
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
 
            if (v[i] == -1)
            {
                cnt_m1++;
            }
            else if (v[i] == 0)
            {
                cnt_0++;
            }
        }
 
        if (cnt_m1 % 2 == 0)
        {
            cout << cnt_0 << endl;
        }
        else
        {
            cout << (cnt_0 + 2) << endl;
        }
    }
}