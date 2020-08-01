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
        int count = 0;
        int count1 = 0,count2 = 0;
        int size = 0;
        vector<ll> a(n);
        for(int i = 0;i<n;i++)
            cin>>a[i];
        if(n==1)
            cout<<"First"<<endl;
        else
        {
            for(int i = 0;i<n;i++)
            {
                if(a[i] == 1)
                {
                    count1 +=1;
                }
                else
                {
                    count2+=1;
                }
            }   
            if(count1 == 0)
                cout<<"First"<<endl;
            else if(count2 == 0)
            {
                if(count1%2 == 0)
                    cout<<"Second"<<endl;
                else
                    cout<<"First"<<endl;
            }
            else
            {
                for(int i = 0;i<n;i++)
                {
                    if(a[i] == 1)
                    {
                        count +=1;
                    }
                    else
                    {
                        break;
                    }
                }
                
                if(count%2)
                    cout<<"Second"<<endl;
                else
                    cout<<"First"<<endl;
            }
        }
        
        

    }
    return 0;
}


