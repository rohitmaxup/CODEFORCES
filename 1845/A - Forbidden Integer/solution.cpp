#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
 
        if (k == 1 && x == 1)
        {
            cout << "NO";
        }
        else if (k > 1 && x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl; // count
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
        }
        else if (k > 1 && x == 1)
        {
            if (k == 2)
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl; // count
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                }
                else
                {
                    cout << "NO";
                }
            }
 
            else if (k > 2)
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl; // count
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                }
                else
                {
                    cout << "YES" << endl;
                    cout << 1 + (n - 3) / 2 << endl; // count
                    cout << 3 << " ";
                    for (int i = 0; i < (n - 3) / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                }
            }
        }
        cout << endl;
    }
}