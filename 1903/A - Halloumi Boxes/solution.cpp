#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
 
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        // If k >= 2, we can always sort the array
        if(k >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            // k == 1 -> only subarrays of length 1 can be reversed
            // array must already be sorted
            bool sorted = true;
 
            for(int i = 1; i < n; i++)
            {
                if(a[i] < a[i - 1])
                {
                    sorted = false;
                    break;
                }
            }
 
            if(sorted)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
 
    return 0;
}