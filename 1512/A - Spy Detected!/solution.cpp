#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0 ; i <n ;i++)
        {
            cin>>v[i];
        }
        int index = 0;
        for(int i = 0 ; i <n ; i++)
        {
            if(count(v.begin(),v.end(),v[i])==1)
            {
                index = i;
            }
        }
        cout<<index+1<<endl;
    }
}