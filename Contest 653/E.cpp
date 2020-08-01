 
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
#define mod 1000003
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define pb push_back
#define SQ(a) (a)*(a)

const int N = 1000005;

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    //ll p = 1000000007; 
    int T = 1;
    //cin>>T;
    while(T--)
    {
        int n;
        int k;
        cin>>n>>k;
        vector<int> a;
        vector<int> b;
        vector<int> c;
        for(int i =0;i<n;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            if(y == 1 && z == 1)
                c.pb(x);
            if(y==1 && z == 0)
                a.pb(x);
            if(y==0 && z == 1)
                b.pb(x);
        }
        ll ans = 0;
        if(a.size() + c.size() < k || b.size() + c.size() < k)
            cout<<-1<<endl;
        else
        {
            int i = 0,j = 0,l = 0;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            sort(c.begin(),c.end());
            int count = 0;
            while(count!=k)
            {
                if(i < a.size() && j < b.size() && l < c.size() )
                {
                    count++;
                    if(a[i] + b[j] > c[l])
                    {
                        ans += c[l];
                        l++;
                    }
                    else
                    {
                        ans += a[i] + b[i];
                        i++;
                        j++;
                    }
                }
                else if(l < c.size())
                {

                        ans += c[l];
                        l++;
                        count++;
                }
                else
                {
                    ans += a[i] + b[j];
                    i++;
                    j++;
                    count++;
                }        
            }
            cout<<ans<<endl;

        }



    }
    return 0;
}


 