 
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
        cin>>n;
        string s;
        cin>>s;
        set<int> st;
        int count = 0;
        for(int i = 0;i<n;i++)
        {
            if(s[i] == '(')
                count++;
            else
                count--;

            if(count < 0)
                st.insert(count);
        }
        cout<<st.size()<<endl;


    }
    return 0;
}


 