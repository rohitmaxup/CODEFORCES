#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 
    int count = 0;
    int index = 0;
 
    int arr[7];
 
    for(int i = 0 ;  i < 7 ; i++)
    {
        cin>>arr[i];
    }
    
    while(count<n)
    {
        for(int i =  0 ; i < 7 ; i++)
        {
            count = count + arr[i];
            if(count>=n)
            {
                index = i;
                break;
            }
        }
 
    }
 
    cout<<index+1<<endl;
}