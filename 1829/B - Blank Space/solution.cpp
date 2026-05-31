#include<bits/stdc++.h>
using namespace std;
 
int longest_zeros(int arr[], int n)
{
    int count = 0;
    int maxi = 0;
 
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
 
    return maxi;
}
 
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
        {
            cin >> arr[i];
        }
 
        cout << longest_zeros(arr, n) << endl;
    }
}