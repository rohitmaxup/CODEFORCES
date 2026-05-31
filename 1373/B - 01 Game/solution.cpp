#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        string s;
        cin >> s;
 
        int count = 0;
 
        for(int i = 0; i < (int)s.size() - 1; i++)
        {
            if(s[i] != s[i+1])
            {
                s.erase(s.begin() + i, s.begin() + i + 2);
                count++;
                i = max(-1, i - 2); // step back to recheck
            }
        }
 
        if(count % 2 == 0)
            cout << "NET
";
        else
            cout << "DA
";
    }
}