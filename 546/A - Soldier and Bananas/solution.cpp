#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
 
    int p = 0;
    for (int i = 1; i <= w; i++)
    {
        p = p + i * k;
    }
 
    if (n <= p)
    {
        cout << (p - n);
    }
    else
    {
        cout << 0;
    }
}