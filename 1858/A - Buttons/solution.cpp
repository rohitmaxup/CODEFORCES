#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
 
        int tac = 0; // 0  for anna and 1 for katie;;
        if (c % 2 == 0)
        {
            tac = 0;
        }
        else
        {
            tac = 1;
        }
 
        if (tac)
        {
            if (a >= b)
            {
                cout << "First" << endl;
            }
            else
            {
                cout << "Second" << endl;
            }
        }
        else
        {
            if (a > b)
            {
                cout << "First" << endl;
            }
            else
            {
                cout << "Second" << endl;
            }
        }
    }
}