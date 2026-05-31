#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<int> v(n);
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            if(v[i] - (i+1)  <= 0) cnt++;
        }
    
 
        cout << cnt << endl;
    }
}