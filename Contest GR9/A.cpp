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
#define MAX 10005
const int N = 200005;
 
using namespace std;



int main()
{
    std::ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        set<int> a;
        for(int i = 0;i<n;i++)
        {
            int k;
            cin>>k;
            a.insert(k);
        }
        int flag = 0;
        for(int i = 0;i<m;i++)
        {
            int k;
            cin>>k;
            if(a.find(k) != a.end() && flag == 0)
            {
                flag = 1;
                cout<<"YES"<<endl;
                cout<<"1 "<<k<<endl;
            }
        }
        if(flag == 0)
            cout<<"NO"<<endl;

    }
    return 0;
}


