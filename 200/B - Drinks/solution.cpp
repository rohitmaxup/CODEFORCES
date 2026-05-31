#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> v(n);
 
    double sum = 0;
 
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
 
    double ans = sum / n;
 
    cout << fixed << setprecision(12) << ans << endl;
}