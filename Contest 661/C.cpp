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

int count(vector<int>& a,int sum)
{
	map<int,int> m;
	int count1 = 0;
	for(int i = 0;i<a.size();i++)
	{
		for(int j =i+1;j<a.size();j++)
		{
			if(m[i] == 0 && m[j] == 0)
			{
				if(a[i]+a[j]==sum)
				{
					count1++;
                    m[i] = 1;
                    m[j] = 1;
                }
			}
		}
	}
	return count1;
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
        vector<int> a(n);
        for(int i = 0;i<n;i++)
        	cin>>a[i];
        sort(a.begin(),a.end());
        if(n == 1)
        	cout<<0<<endl;
        else
        {
        	int maxi = -1;
        	for(int i = a[0] + a[1];i<= a[n-1] + a[n-2];i++)
        	{
        		maxi = max(maxi,count(a,i));
        	}
        	cout<<maxi<<endl;
        }
        

    }

    return 0;
}
