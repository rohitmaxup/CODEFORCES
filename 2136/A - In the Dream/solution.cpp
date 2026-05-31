#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
cin >> t;
while(t--)
{
long long  a, b, c, d;
cin >> a >> b>>c>>d;
 
long long x = min(a, b);
long long  y = max(a, b);
 
if(y > 2*x+2) cout << "NO" << endl;
else
{
a = c-a;
b = d-b;
x = min(a, b);
y = max(a, b);
if(y > 2*x+2) cout << "NO" << endl;
else cout << "YES" << endl;
}
}
return 0;
 
}