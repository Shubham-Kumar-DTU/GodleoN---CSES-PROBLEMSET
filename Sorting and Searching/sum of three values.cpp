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
int n ;
int x;
cin >> n >> x;
vector<pair<int,int>>v(n);
for(int i = 0 ; i < n ; i++)
{
int num ; 
cin >> num;
v[i].first = num;
v[i].second = i+1;
}
sort(v.begin(),v.end());
bool found = 0;
for(int i = n-1 ; i >= 2 ; i--)
{
int ans = x - v[i].first;
int j = i-1;
int start = 0;
while(start < j)
{
    if(v[start].first + v[j].first == ans)
    {
        int x = v[start].second;
        int y = v[j].second;
        int z = v[i].second;
        cout << min(x , min(y , z)) << " " << x + y + z - min(x , min(y , z)) - max(x , max(y ,z)) << " " << max(x , max(y ,z)) << endl;
        found = 1;
        break; 
    }
    if(v[start].first + v[j].first < ans)
    {
        start++;
        continue;
    }
    if(v[start].first + v[j].first > ans)
    {
        j--;
        continue;
    }
} 
}
if(!found)
{
    cout << "IMPOSSIBLE" << endl;
}
}

