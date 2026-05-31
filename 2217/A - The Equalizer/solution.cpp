#include<bits/stdc++.h>
using namespace std;
long long sum(vector<int>arr,int n)
{
    long long sum = 0;
    for(int i = 0 ;i<n ; i++)
    {
        sum +=arr[i];
    }
 
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , k;
        cin>>n>>k;
        
        vector<int> v(n);
        for(int i =  0 ; i < n ;  i++)
        {
            cin>>v[i];
        }
 
       if(sum(v,n)%2==1||(n*k)%2==0)
       {
        cout<<"YES"<<endl;
       }
       else
    {
        cout<<"NO"<<endl;
    }
 
 
    }
}