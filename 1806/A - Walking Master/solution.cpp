#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x, y, c, d;
        cin >> x >> y >> c >> d;
 
        long long a = d - y;
        long long b = x + (d - y) - c;
 
        if(a < 0 || b < 0)
            cout << -1 << "
";
        else
            cout << a + b << "
";
    }
}