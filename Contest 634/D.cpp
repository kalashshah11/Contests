#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
         for(int i=0;i<9;i++)
         {
             string x;
             cin>>x;
              for(int j=0;j<9;j++)
              {
                    
                    //cout<<x[j]-'0';
                    int k;
                    k = x[j] - 48;
                    if(i==0 && j==0)
                        cout<<k%9+1;
                    else if(i==1 && j==3)
                        cout<<k%9+1;
                    else if(i==2 && j==6)
                        cout<<k%9+1;
                    else if(i==3 && j==1)
                        cout<<k%9+1;
                    else if(i==4 && j==4)
                        cout<<k%9+1;
                    else if(i==5 && j==7)
                        cout<<k%9+1;
                    else if(i==6 && j==2)
                        cout<<k%9+1;
                    else if(i==7 && j==5)
                        cout<<k%9+1;
                    else if(i==8 && j==8)
                        cout<<k%9+1;
                    else
                        cout<<k;
              }
              cout<<endl;
         }
         
    }
    
    
    return 0;
}