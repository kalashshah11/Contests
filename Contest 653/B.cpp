 
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
        ll n;
        cin>>n;
        int count2 = 0,count3 = 0;
        while(n%2 == 0)
        {
            n = n/2;
            count2++;
        }
        while(n%3 == 0)
        {
            n = n/3;
            count3++;
        }
        if(n > 1)
        {
            cout<<-1<<endl;
            continue;
        }
        else 
        {
            if(count2 <= count3)
                cout<<2*count3 - count2<<endl;
            else
                cout<<-1<<endl;
        }



    }
    return 0;
}


 