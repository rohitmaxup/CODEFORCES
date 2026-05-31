#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
 
        if(a == b)
        {
            cout << "0 0
";
            continue;
        }
 
        long long d = abs(a - b);
 
        long long r = a % d;
 
        long long moves = min(r, d - r);
 
        cout << d << " " << moves << "
";
    }
}