#include <bits/stdc++.h>
using namespace std;
string change(string s)
{
 
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
 
    return s; // HELLO
}
int main()
{
    string s, t;
    cin >> s >> t;
 
    s = change(s);
    t = change(t);
 
    bool found = false;
    int index;
 
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i] && !found)
        {
            found = true;
            index = i;
        }
    }
 
    if (found)
    {
        if (s[index] > t[index])
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }
}