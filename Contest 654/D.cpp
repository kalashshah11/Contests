 
#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define fill(a,val) memset(a,val,sizeof(a))
#define REP(i,a,b) for (auto i = a; i != b; i++)
#define ll long long int
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define pb push_back
#define SQ(a) (a)*(a)
 
const int N = 100005;
 
using namespace std;

 
int main()
{
    std::ios::sync_with_stdio(false);

    int T = 1;
    cin>>T;
    // cin.ignore(); must be there when using getline(cin, s)
    while(T--)
    {
        
        int n,k;
        cin>>n>>k;
        if(k == 0)
        {
            cout<<0<<endl;
            for(int i = 0;i<n;i++)
            {
                for(int j = 0;j<n;j++)
                    cout<<0;
                cout<<endl;
            }
        }
        else
        {
            int x = k/n;
            int y = k%n;
            if(y > 0)
                cout<<2<<endl;
            else
                cout<<0<<endl;
            for(int i = 0;i<n;i++)
            {
                for(int j = 0;j<n;j++)
                {
                    if((i+j)%n < x)
                        cout<<1;
                    else if((i+j)%n == x && y > 0)
                    {
                        cout<<1;
                        y--;
                    }
                    else
                        cout<<0;
                }
                cout<<endl;
            }

        }
        


    }
    return 0;
}

