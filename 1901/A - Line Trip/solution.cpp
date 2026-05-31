#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, x;
        cin >> n >> x;
 
        vector<int> v(n);
 
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        int diff = v[0]; // 0 → first
 
        for(int i = 1; i < n; i++)
        {
            diff = max(diff, v[i] - v[i-1]);
        }
 
        // IMPORTANT: last segment counted twice
        diff = max(diff, 2 * (x - v[n-1]));
 
        cout << diff << endl;
    }
}