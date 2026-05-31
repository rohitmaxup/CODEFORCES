#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
 
    int count_0 = 0;
    int count_5 = 0;
 
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        if(v[i] == 0) count_0++;
        if(v[i] == 5) count_5++;
    }
 
    sort(v.begin(), v.end()); 
 
    
    if(count_0 == 0)
    {
        cout << -1;
        return 0;
    }
 
  
    count_5 = (count_5 / 9) * 9;
 
    
    if(count_5 == 0)
    {
        cout << 0;
        return 0;
    }
 
    for(int i = 0; i < count_5; i++)
        cout << 5;
 
   
    for(int i = 0; i < count_0; i++)
        cout << 0;
 
    return 0;
}