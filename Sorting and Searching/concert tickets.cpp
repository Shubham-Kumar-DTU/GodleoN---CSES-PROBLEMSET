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
int n , m ;
cin >> n >> m ;
vector<int>v(n);
multiset<int> s;
for(int i =  0 ; i < n ; i++)
{
    cin >> v[i];
    s.insert(v[i]);
}
vector<int>price(m);
for(int i = 0 ; i < m ; i++)
{
    cin >> price[i];
}
for(int  i = 0 ; i < m ; i++)
{
    auto it = s.upper_bound(price[i]);
    if(it == s.begin())
    {
        cout << -1 << endl;
    }
    else
    {
        it = prev(it , 1);
        cout << *it << endl;
        s.erase(it);
    }
}
}

