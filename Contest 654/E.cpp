 
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
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define pb push_back
#define SQ(a) (a)*(a)
 
const int N = 100005;
 
using namespace std;

int binarySearchCount(vector<int>& arr, int n, int key) 
{ 
    int left = 0; 
    int right = n - 1; 
  
    int count = 0; 
  
    while (left <= right) { 
        int mid = (right + left) / 2; 
  
        // Check if middle element is 
        // less than or equal to key 
        if (arr[mid] <= key) { 
  
            // At least (mid + 1) elements are there 
            // whose values are less than 
            // or equal to key 
            count = mid + 1; 
            left = mid + 1; 
        } 
  
        // If key is smaller, ignore right half 
        else
            right = mid - 1; 
    } 
  
    return count; 
} 
int main()
{
    std::ios::sync_with_stdio(false);

    int T = 1;
    //cin>>T;
    // cin.ignore(); must be there when using getline(cin, s)
    while(T--)
    {
        
        int n,p;
        cin>>n>>p;
        vector<int> a(n);
        for(int i = 0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        vector<int> x;

        for(int i = a[0];i<a[n-1];i++)
        {
            int candies = i;
            ll ans = 1;
            int count = 0;
            int flag = 0;
            for(int j = 0;j<n;j++)
            {
                int temp = binarySearchCount(a,n,candies);
                //cout<<temp<<" "<<count<<" ";
                if(temp - count > 0)
                {
                    
                    if((temp - count)%p == 0)
                        flag = 1;
                        candies++;
                        count++;
                    //cout<<(temp-count)<<" "<<flag<<endl;
                }
                else
                {
                    flag = 1;
                    break;
                }

            }
            if(flag == 0)
                x.push_back(i);
        }
        cout<<x.size()<<endl;
        for(int i = 0;i<x.size();i++)
            cout<<x[i]<<" ";


    }
    return 0;
}

