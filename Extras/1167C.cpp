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

void dfs(int x,vector<int>& visited,vector<vector<int>>& G)
{
    visited[x]=true;

    for(auto& i : G[x])
    {
        if(visited[i]==false)
        {
            dfs(i,visited,G);
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    int T = 1;
    //cin>>T;
 
    int n,m;
    cin>>n>>m;
    vector<pair<ll,int>> a(n);
    vector<ll> a1(n);
    priority_queue<ll> pq1;
    priority_queue<ll> pq2;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i].second>>a[i].first;
        if(a1[a[i].second - 1] < a[i].first)
        {
            a1[a[i].second - 1] = a[i].first;
        }
    }
    map<int,int> m1;
    for(int i = 0;i<n;i++)
    {
        if(a[i].first == a1[a[i].second - 1] && m1[a[i].second - 1] == 0)
        {
            m1[a[i].second - 1] = 1;
            pq1.push(a[i].first);
        }
        else
        {
            pq2.push(a[i].first);
        }
    }
    ll ans = 0;
    ll count = 0;
    for(int i = 0;i<m;i++)
    {
        ll temp1 = 0,temp2 = 0;
        if(pq1.size() > 0)
        {
            temp1 = ans - count*count + (count+1)*(count+1) + pq1.top();
            count++;
        }
        if(pq2.size() > 0)
        {
            temp2 = ans + pq2.top();
        }
        if(temp1 >= temp2)
        {
            ans = temp1;
            pq1.pop();
        }
        else
        {
            ans = temp2;
            pq2.pop();
        }
        cout<<ans<<endl;
    }
    cout<<ans<<endl;

    return 0;
}
