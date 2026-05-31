#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
 
    for(int i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    int count  = 1;
 
    int mini = v[0];
    int min_idx =0;
    for(int i = 1 ; i < n ; i++)
    {
        if(v[i]<mini)
        {
            mini = v[i];
            min_idx = i;
            count = 1;
 
        }
        else if(mini ==v[i])
        {
            count++;
        }
 
    }
 
    if(count>1)
    {
        cout<<"Still Rozdil"<<endl;
    }
    else
    {
        cout<<min_idx+1<<endl;
    }
}