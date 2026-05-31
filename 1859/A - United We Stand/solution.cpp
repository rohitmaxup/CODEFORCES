#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
 
        sort(a.begin(), a.end());
 
        int mn = a[0];
 
        vector<int> b, c;
 
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] == mn)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }
 
        if(c.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
 
            for(int x : b) cout << x << " ";
            cout << endl;
 
            for(int x : c) cout << x << " ";
            cout << endl;
        }
    }
}