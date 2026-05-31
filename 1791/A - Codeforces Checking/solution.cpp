#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        char c;
        cin >> c;
 
        string s = "codeforces";
        bool found = false;
 
        int i = 0;
 
        while(i < s.length())
        {
            if(c == s[i])
            {
                cout << "YES
";
                found = true;
                break;
            }
            i++;   // FIX: increment
        }
 
        if(!found)
            cout << "NO
";
    }
}