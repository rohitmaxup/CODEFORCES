#include<bits/stdc++.h>
using namespace std;
bool isNonDecreasing(vector<int>& arr)
{
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] < arr[i - 1])
        {
            return false;
        }
    }
 
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
 
        vector<int> v(n);
        for(int i =  0;  i < n ; i++)
        {
            cin>>v[i];
        }
 
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(isNonDecreasing(v))
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}