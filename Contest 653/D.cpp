 
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
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        ll k;
        cin>>n>>k;
        vll a(n);
        map<ll,int> m;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%k != 0)
            m[k - a[i]%k]++;
        }
        int maxcount = 0;
        for(auto it = m.begin();it!=m.end();it++)
        {
            maxcount = max(it->second,maxcount);
        }
        ll maxval = 0;
        for(auto it = m.begin();it!=m.end();it++)
        {
            if(it->second == maxcount)
            maxval = max(it->first,maxval);
        }
        if(maxcount == 0)
            cout<<0<<endl;
        else
            cout<<(maxcount - 1)*k + maxval + 1<<endl;



    }
    return 0;
}


 