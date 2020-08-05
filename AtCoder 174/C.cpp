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
        string s;
        cin>>s;
        int rcount = 0;
        int wcount = 0;
        for(int i = 0;i<s.length();i++)
        {
        	if(s[i] == 'R')
        		rcount++;
        	else
        		wcount++;
        }
        int rcountl = 0;
        int wcountl = 0;
        int rcountr = rcount;
        int wcountr = wcount;
        int ans = s.length();
        for(int i = 0;i<s.length();i++)
        {
        	if(s[i] == 'W')
        	{
        		ans = min(ans,max(rcountr,wcountl));
        		wcountl++;
        		wcountr--;
        	}
        	else
        	{
        		ans = min(ans,max(rcountr-1,wcountl));
        		rcountl++;
        		rcountr--;
        	}
        	//cout<<ans<<" ";
        }   
        cout<<ans<<endl;
    }
    return 0;
}
