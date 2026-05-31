#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // long long x , n;
        // cin>>x>>n;
 
        // int i = 1;
        // while(n--)
        // {
 
        //     if(x%2==0)
        //     {
        //         x = x - i;
        //         i++;
        //     }
        //     else
        //     {
        //         x =  x + i;
        //         i++;
 
        //     }
        // }
 
        // cout<<x<<endl;
 
        // this method will throw tle , and the answer wont be correct
 
        long long x, n;
        cin >> x >> n;
 
        int r = n % 4;
 
        if (r == 0)
        {
        }
        else if (r == 1)
        {
            if (x % 2 == 0)
                x -= n;
            else
                x += n;
        }
        else if (r == 2)
        {
            if (x % 2 == 0)
                x += 1;
            else
                x -= 1;
        }
        else if (r == 3)
        {
            if (x % 2 == 0)
                x += n + 1;
            else
                x -= n + 1;
        }
 
        cout << x << endl;
    }
}