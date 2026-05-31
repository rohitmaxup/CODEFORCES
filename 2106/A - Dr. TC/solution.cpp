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
        string num;
        cin >> num;
 
        vector<int> v;
 
        for (int i = 0; i < n; i++)
        {
            v.push_back(num[i] - '0');
        }
 
        int z = count(v.begin(), v.end(), 0);
 
        cout << (n * (n - z - 1) + (2 * z)) << endl;
    }
}