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
 
        vector<char> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
 
        int hash[26] = {0};
 
        for (int i = 0; i < n; i++)
        {
            hash[s[i] - 'a']++;
        }
 
        int odd = 0;
        
        int need = 0;
        for (int i = 0; i < 26; i++)
        {
            if (hash[i] % 2 != 0)
            {
                odd++;
            }
        }
 
        while (odd > 1)
        {
            need++;
            odd--;
        }
 
        if (need <= k)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
}