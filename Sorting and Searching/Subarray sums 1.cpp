//GODLEON'S CODE
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace std;

#define ff                first
#define ss                second
#define int        	  long long
#define ll                long long
#define ddouble           long double  
#define pb 		  push_back
#define mp 		  make_pair
#define pii               pair<int , int>
#define vi                vector<int>
#define mii               map<int,int>
#define gsort             greater<int>
#define pqb               priority_queue<int>
#define pqs               priority_queue<int , vi , greater<int>>
#define setbits(x)        _builtin_popcountll(x)
#define zrobits(x)        _builtin_ctzll(x)
#define mod               1000000007
#define mod1              mod
#define mod2              1000000009
#define inf               1e18
#define ps(x,y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)    type *arr = new type[n] ;
#define test(t)           int t ; cin >> t ; while(t--)
#define ifor(a,b)         for(int i = a ; i < b ; i++)
#define dfor(a,b)         for(int i = b-1 ; i >= a ; i--)
#define fio               ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
mt19937                   rng(chrono::steady_clock::now().time_since_epoch().count());

int32_t main()
{
int n;
cin >> n;
int k;
cin >> k;
vector<int>v(n);
for(int i = 0 ; i < n ; i++)
{
cin >> v[i];
}
vector<int>sum(n);
sum[0] = v[0];
for(int i = 1; i < n ; i++)
{
    sum[i] = sum[i-1] + v[i];
}
int start = 0 ;
int end = 0 ;
int count = 0 ;
while(start < n && end < n)
{
int cursum = sum[end] - sum[start] + v[start];
if(cursum == k)
{
    count++;
    start++;
    end++;
}
else if(cursum > k)
{
    start++;
} 
else
{
    end++;
}
}
cout << count << endl;
}
