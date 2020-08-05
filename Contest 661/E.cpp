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
map<pair<int,int>,int> counts;
priority_queue<pair<ll,pair<int,int>>> pq;
map<pair<int,int>,ll> m;
ll sum;
int dfs(int x,int par,vector<vector<int>>& adj)
{
	int count = 0;
	int flag = 0;
	for(int i = 0;i<adj[x].size();i++)
	{
		if(adj[x][i] != par)
		{
			flag = 1;
			count += dfs(adj[x][i],x,adj); 
		}
	}
	if(flag == 0)
		count++;
	counts[{x,par}] = count;
	counts[{par,x}] = count;
	ll val = count * m[{x,par}];
	sum += val;
	pq.push(mp(val,mp(x,par)));
	return count;
}

int main()
{
    std::ios::sync_with_stdio(false);
    int T = 1;
    cin>>T;
    for(int t = 1;t<=T;t++)
    {
        int n;
        cin>>n;
        ll S;
        cin>>S;
        sum = 0;
        counts.clear();
        m.clear();
        while(!pq.empty())
        {
        	pq.pop();
        } 
        vector<vector<int>> adj(n+1);
        for(int i = 0;i<n-1;i++)
        {
        	ll a,b,c;
        	cin>>a>>b>>c;
        	adj[a].push_back(b);
        	adj[b].push_back(a);
        	m[{a,b}] = c;
        	m[{b,a}] = c;
        }
        int a = dfs(1,0,adj);
        int count = 0;
        //cout<<pq.size()<<" ";
        while(sum > S)
        {
        	auto x = pq.top();
        	int v = counts[x.second];
        	//cout<<x.first % counts[x.second];
        	ll val = x.first / counts[x.second];

        	sum -= v * (val - val/2);
        	x.first = v * (val/2);
        	pq.pop();
        	pq.push(x);
        	count++;
        	//cout<<x.second.first<<" "<<x.second.second<<endl;
        }
        cout<<count<<endl;
    }

    return 0;
}
