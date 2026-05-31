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
 
        int counter = 0;
        int maxi = 0;
        int total = 0;
 
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '.')
            {
                total++;           
                counter++;         
                maxi = max(maxi, counter);
            }
            else
            {
                counter = 0;
            }
        }
 
        if(maxi >= 3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << total << endl;
        }
    }
}