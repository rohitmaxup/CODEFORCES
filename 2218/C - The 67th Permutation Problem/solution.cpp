#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        
        
        for(int i = 1; i <= n; i++){
            int a = n + 1 - i;      
            int b = n + 2*i - 1;     
            int c = n + 2*i;        
            cout << a << " " << b << " " << c;
            if(i < n) cout << " ";
        }
        cout << "
";
    }
    
    return 0;
}