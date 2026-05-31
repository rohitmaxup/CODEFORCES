// firstly we have to find that the year represented , is the perfect square of what number , and then we just have to represent the number as sum of two numbers (which can be doine easily)
#include <bits/stdc++.h>
using namespace std;
 
bool isPerfectSquare(long long n)
{
    if (n < 0)
        return false;
    long long root = round(sqrt(n));
    return root * root == n;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        if (isPerfectSquare(n))
        {
            int 
            x = sqrt(n);
 
            if (x % 2 == 0)
            {
                cout << x / 2 << " " << x / 2 << endl;
            }
            else
            {
                cout << (x - 1) / 2 << " " << (x + 1) / 2 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}