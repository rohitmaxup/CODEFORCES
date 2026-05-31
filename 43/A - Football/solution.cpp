#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
 
    vector<string> v(n);
    int count1 = 0;
    int count2 = 0;
    int team = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
 
        if (v[i] != v[0])
        {
            team = i;
        }
 
        if (v[i] == v[0])
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
 
    if (count1 > count2)
    {
        cout << v[0];
    }
    else
    {
        cout << v[team];
    }
}