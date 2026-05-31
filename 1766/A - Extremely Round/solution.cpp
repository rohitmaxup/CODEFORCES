#include <bits/stdc++.h>
using namespace std;
 
// int main()
// {
//     int t;
//     cin >> t;
 
//     while (t--)
//     {
//         int n;
//         cin >> n;
 
//         int count = 0;
 
//         for (int i = 1; i <= n; i++)
//         {
//             if (i <= 10)
//             {
//                 count++;
//             }
//             else
//             {
//                 int j = 0;
//                 vector<int> v(10); // FIXED (size added)
//                 int temp = i;
 
//                 while (temp > 0) // FIXED
//                 {
//                     v[j] = temp % 10; // FIXED
//                     temp = temp / 10;
//                     j++;
//                 }
 
//                 int cnt = 0;
 
//                 for (int k = 0; k < j; k++) // FIXED
//                 {
//                     if (v[k] != 0)
//                     {
//                         cnt++;
//                     }
//                 }
 
//                 if (cnt == 1)
//                 {
//                     count++;
//                 }
//             }
//         }
 
//         cout << count << endl;
//     }
// }
 
int check(int x)
{
    int digits = 0;
    int zeros = 0;
 
    while (x > 0)
    {
        if (x % 10 == 0)
            zeros++;
 
        digits++;
        x = x / 10;
    }
 
    return zeros == digits - 1;
}
int main()
{
    // precomputing the thing here
 
    vector<int> round_no;
    for (int i = 0; i < 999999; i++)
    {
        if (check(i) == 1)
        {
            round_no.push_back(i);
        }
    }
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < round_no.size(); i++)
        {
            if (round_no[i] <= n)
            {
                count++;
            }
        }
 
        cout << count << endl;
    }
}