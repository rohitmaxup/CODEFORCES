#include<bits/stdc++.h>
using namespace std;
 
int main()
{   
    int t;
    cin >> t;
 
    while(t--)
    {
        int total = 0;
        char c[10][10];
 
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                cin >> c[i][j];         
            }
        }
 
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if(c[i][j] == 'X')
                {
                    if(i==0 || j==0 || i==9 || j==9)
                    {
                        total += 1;
                    }
                    else if(i==1 || j==1 || i==8 || j==8)
                    {
                        total += 2;
                    }
                    else if(i==2 || j==2 || i==7 || j==7)
                    {
                        total += 3;
                    }
                    else if(i==3 || j==3 || i==6 || j==6)
                    {
                        total += 4;
                    }
                    else if(i==4 || j==4 || i==5 || j==5)
                    {
                        total += 5;
                    }
                }
            }   
        }
 
        cout << total << endl;
    }
}