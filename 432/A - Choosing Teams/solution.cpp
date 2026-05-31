#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int n, k;
    cin >> n >> k;
 
    if (n < 3)
    {
        cout << 0;
    }
 
    else
    {
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        sort(arr.begin(), arr.end());
        for (int i = 2; i < n; i = i + 3)
        {
            if (5 - k >= arr[i])
            {
                count++;
            }
        }
 
        cout << count;
    }
}