#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, a, b;
        cin >> l >> a >> b;
 
        int maxi = -1;
 
        for (int i = 0; i < l; i++)
        {
            maxi = max(maxi, (a + i * b) % l);
        }
 
        cout << maxi << endl;
    }
}