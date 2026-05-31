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
        vector<int> res(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> res[i];
        }
 
        int hash[2] = {0};
 
        for (int i = 0; i < n; i++)
        {
            if (res[i] == -1)
            {
                hash[res[i] + 1]++;
            }
            else
            {
                hash[res[i]]++;
            }
        }
        int count = 0;
 
        if (hash[0] == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            while (hash[0] > hash[1])
            {
                hash[0]--;
                hash[1]++;
                count++;
            }
 
            if (hash[0] % 2 != 0)
            {
                count++;
            }
 
            cout << count << endl;
        }
    }
}