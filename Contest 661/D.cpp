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
    //cin>>T;
    for(int t = 1;t<=T;t++)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count = 0;
        vector<int> last0;
        vector<int> last1;
        vector<int> ans(n);
        for(int  i = 0;i<n;i++)
        {
        	if(str[i] == '0')
        	{
        		if(last1.empty())
        		{
        			count++;
        			last0.push_back(count);
        			ans[i] = count;
        		}
        		else
        		{
        			last0.push_back(last1.back());
        			ans[i] = last1.back();
        			last1.pop_back();
        		}
        	}
        	else if(str[i] == '1')
        	{
        		if(last0.empty())
        		{
        			count++;
        			last1.push_back(count);
        			ans[i] = count;
        		}
        		else
        		{
        			last1.push_back(last0.back());
        			ans[i] = last0.back();
        			last0.pop_back();
        		}
        	}
        }
        cout<<count<<endl;
        for(int i  =0;i<n;i++)
        {
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
