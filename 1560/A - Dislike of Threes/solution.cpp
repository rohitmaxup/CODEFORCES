#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
 
        int cnt =1;
        int num ;
        for(int i =1; i <=k ; i++)
        {
            if(i%3 ==0 || i%10 == 3 )
            {
                cnt++;
                k++;
            }
            else
            {
                cnt++;
            }
            
        }
 
        cout<<cnt-1<<endl;
    }
}