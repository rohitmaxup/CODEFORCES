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
 
    string s;
    cin>>s;
 
    vector<int>v(n);
 
    for(int i =  0 ;  i < n ; i++)
    {
        v[i] = s[i] -'0';
    }
 
 
    if(v[0]==v[n-1])
    {
        cout<<n<<endl;
    }
    else 
    {
       while(v.size() > 1 &&
                  ((v.front() == 0 && v.back() == 1) ||
                   (v.front() == 1 && v.back() == 0)))
            {
                v.erase(v.begin());        // remove front
                v.erase(v.end() - 1);      // remove back
            }
 
            cout << v.size() << endl;
    }
 
}
}