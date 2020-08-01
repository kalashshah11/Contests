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

string findWinner(vector<ll>& A, int n) 
{ 
    ll res = 0; 
    for (int i = 0; i < n; i++) 
        res ^= A[i]; 
  
    // case when Alice is winner 
    if (res == 0 || n % 2 == 0) 
        return "First"; 
  
    // when Bob is winner 
    else
        return "Second"; 
}

int main()
{
    std::ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        //cout<<a<<" "<<b<<endl;
        
        vector<int> counts1;
        vector<int> counts2;
        int count = 1;
        for(int  i = 1;i<n;i++)
        {
            if(a[i]!=a[i-1])
            {
                counts1.push_back(count);
                count = 1;
            }
            else
                count++;
        }
        counts1.push_back(count);
        count = 1;
        for(int  i = 1;i<n;i++)
        {
            if(b[i]!=b[i-1])
            {
                counts2.push_back(count);
                count = 1;
            }
            else
                count++;
        }
        counts2.push_back(count);

        // for(int i = 0;i<counts1.size();i++)
        //     cout<<counts1[i]<<" ";
        vector<int> pref1;
        vector<int> pref2;
        pref1.pb(counts1[0]);
        pref2.pb(counts2[0]);
        for(int i = 1;i<counts1.size();i++)
        {
            pref1.pb(pref1.back() + counts1[i]);
        }
        for(int i = 1;i<counts2.size();i++)
        {
            pref2.pb(pref2.back() + counts2[i]);
        }

        if(counts1.size()%2 == 0)
        {
            if(a[0] == b[n-1])
            {
                cout<<pref1.size() + pref2.size() - 1<<" ";
                for(int i = 0;i<pref1.size();i++)
                {
                    cout<<pref1[i]<<" ";
                }
                for(int i = pref2.size()-2;i>=0;i--)
                    cout<<pref2[i]<<" ";
            }
            else
            {
                cout<<pref1.size() + pref2.size()<<" ";
                for(int i = 0;i<pref1.size();i++)
                {
                    cout<<pref1[i]<<" ";
                }
                for(int i = pref2.size()-1;i>=0;i--)
                    cout<<pref2[i]<<" ";
            }
        }
        else
        {
            if(a[0] != b[n-1])
            {
                cout<<pref1.size() + pref2.size() - 1<<" ";
                for(int i = 0;i<pref1.size();i++)
                {
                    cout<<pref1[i]<<" ";
                }
                for(int i = pref2.size()-2;i>=0;i--)
                    cout<<pref2[i]<<" ";
            }
            else
            {
                cout<<pref1.size() + pref2.size()<<" ";
                for(int i = 0;i<pref1.size();i++)
                {
                    cout<<pref1[i]<<" ";
                }
                for(int i = pref2.size()-1;i>=0;i--)
                    cout<<pref2[i]<<" ";
            }
        }
        cout<<endl;


        

    }
    return 0;
}


