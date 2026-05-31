#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n, a, b;
    cin>>n>>a>>b;
 
    if(a<=b/3)
    {
        cout<<n*a<<endl;
    }
    else 
    {
        if(n%3==0)
        {
            cout<<(n/3)*b<<endl;
        }
        else if(n%3 == 2)
        {
            if(2*a <= b)
            {
               cout<<(n/3)*b + a*2<<endl;
            }
            else
            {
                cout<<((n/3)+1)*b<<endl;
            }
        }
        else if(n%3==1)
        {
            if(a<b)
            {
                cout<<(n/3)*b + a<<endl;
            }
            else{
                cout<<((n/3)+1)*b<<endl;
            }
        }
    }
}
    
}