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
         int n;
         cin>>n;
         set<int> a;
         int count[n+1];
         count[0] = 0;
         for(int i=0;i<n;i++)
         {
              count[i+1] = 0;
         }
         for(int i=0;i<n;i++)
         {
              int x;
              cin>>x;
              //cout<<x;
              a.insert(x);
              count[x]++;
         }
         int maxi = 0;
         for(int i=0;i<n;i++)
         {
             if(maxi < count[i+1])
             {
                 maxi = count[i+1];
             }
         }
         //cout<<a.size();
        // cout<<count[4];
        if(a.size() == maxi)
        {
            cout<<maxi-1<<endl;
        }
        else if(a.size() > maxi)
        {
            cout<<maxi<<endl;
        }
        else
        {
            cout<<a.size()<<endl;
        }
         //cout<<min((int)a.size(),maxi - 1)<<endl;
    }
    
    
    return 0;
}