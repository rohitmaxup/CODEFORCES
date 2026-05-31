#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1 , a2 , a3;
    cin>>a1>>a2>>a3;
 
    int a , b ,c;
 
     a = sqrt(a1*a3/a2);
     b = a1/a;
     c = a3/a;
 
    cout<<(a*4+b*4+c*4)<<endl;
}