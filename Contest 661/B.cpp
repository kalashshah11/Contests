#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define REP(i,a,b) for (auto i = a; i != b; i++)
#define ll long long int
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define pb push_back
#define SQ(a) (a)*(a)
 
using namespace std;


int main()
{
    std::ios::sync_with_stdio(false);
    int T = 1;
    cin>>T;
    for(int t = 1;t<=T;t++)
    {
        int n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        ll mina = mod;
        ll minb = mod;
        for(int i = 0;i<n;i++)
        {
        	cin>>a[i];
        	mina = min(mina,a[i]);
        }
        for(int i = 0;i<n;i++)
        {
        	cin>>b[i];
        	minb = min(minb,b[i]);
        }
        ll ans = 0;
        for(int i = 0;i<n;i++)
        {
        	ans += max(a[i] - mina,b[i]-minb);
        }
        cout<<ans<<endl;
    }

    return 0;
}
