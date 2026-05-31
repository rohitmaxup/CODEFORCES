#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
 
    if((int)s[0]<=90 && (int)s[0]>=65)
    {
        cout<<s<<endl;
    }
    else
    {
        s[0] = s[0] - 32;
 
        cout<<s<<endl;
    }
}