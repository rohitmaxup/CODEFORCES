#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        int arr[n];
 
        for(int i = 0; i < n; i++)
            cin >> arr[i];
 
  
        bool sorted = true;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] < arr[i-1])
            {
                sorted = false;
                break;
            }
        }
 
        if(!sorted)
        {
            cout << 0 << endl;
            continue;
        }
 
 
        int diff = INT_MAX;
 
        for(int i = 0; i < n - 1; i++)
            diff = min(diff, arr[i+1] - arr[i]);
 
        cout << (diff / 2) + 1 << endl;
    }
}