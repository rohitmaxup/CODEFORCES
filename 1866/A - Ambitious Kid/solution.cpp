#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k;
    int mini = INT_MAX;
    for(int i = 0 ; i < n ; i++)
    {
 
        cin>>k;
        arr[i]=abs(k);
    }
 
    for(int  i = 0 ; i < n ;  i++)
    {
        mini = min(mini,arr[i]);
    }
 
    cout<<mini;
}