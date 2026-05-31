#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int X = 0;
    while (n--)
    {
        string s = "";
 
        cin >> s;
        int total = 0;
 
        for (int i = 0; i < s.length(); i++)
        {
            total += s[i] - '0';
        }
        if (total == 30)
        {
            X++;
        }
        else
        {
            X--;
        }
    }
 
    cout << X;
    return 0;
}