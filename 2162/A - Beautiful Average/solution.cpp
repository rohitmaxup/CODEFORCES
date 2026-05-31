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
 
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        int avg = INT_MIN;
        int sum = 0;
 
        for (int j = 0; j < n; j++)
        {
            sum = 0;
 
            for (int i = j; i < n; i++)
            {
                sum = sum + v[i];
                avg = max(avg, (sum / (i - j + 1)));
            }
        }
 
        cout << avg << endl;
    }
}