#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
 
        vector<long long> v(n);
 
        for(int i = 0 ; i <n ; i++)
        {
            cin>>v[i];
        }
        bool flag = false;
        for(int i = 0 ; i <n; i++)
        {
            for(int j = i+1 ; j<n ; j++)
            {
                if(__gcd(v[i],v[j])<=2)
                {
                    flag = true;
                    break;
                }
            }
        }
 
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}