#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s ;
        cin>>s;
        
        if(s=="abc")
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            swap(s[0],s[1]);
            if(s=="abc")
            {
                cout<<"YES"<<endl;
                continue;
            }
            else 
            {
                swap(s[0],s[1]);
            }
 
             swap(s[0],s[2]);
            if(s=="abc")
            {
                cout<<"YES"<<endl;
                continue;
 
            }
            else 
            {
                swap(s[0],s[2]);
            }
 
             swap(s[1],s[2]);
            if(s=="abc")
            {
                cout<<"YES"<<endl;
                continue;
            }
            else 
            {
                swap(s[1],s[2]);
            }
 
            //  swap(s[0],s[1]);
            // if(s=="abc")
            // {
            //     cout<<"YES";
 
            // }
            // else 
            // {
            //     swap(s[0],s[1]);
            // }
 
            //  swap(s[0],s[1]);
            // if(s=="abc")
            // {
            //     cout<<"YES";
 
            // }
            // else 
            // {
            //     swap(s[0],s[1]);
            // }
 
            //  swap(s[0],s[1]);
            // if(s=="abc")
            // {
            //     cout<<"YES";
 
            // }
            // else 
            // {
            //     swap(s[0],s[1]);
            // }
            //  swap(s[0],s[1]);
            // if(s=="abc")
            // {
            //     cout<<"YES";
 
            // }
            // else 
            // {
            //     swap(s[0],s[1]);
            // }
 
            cout<<"NO"<<endl;
 
        }
 
 
    
    }
}