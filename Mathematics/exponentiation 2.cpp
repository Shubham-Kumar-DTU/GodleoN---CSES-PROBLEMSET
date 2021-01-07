#include <bits/stdc++.h> 
using namespace std; 
#define ll long long

ll power(ll x, ll y, ll p) 
{ 
	if(x==0 && y==0)
	{
		return 1;
	}
	ll res = 1;	 
	x = x % p;  

	if (x == 0) return 0; 

	while (y > 0) 
	{ 
		if (y & 1) 
			res = (res*x) % p; 
		y = y>>1;
		x = (x*x) % p; 
	} 
	return res; 
} 

int main() 
{ 
    int t ;
    cin >> t;
    while(t--)
    {
	int x , y , z ;
    cin >> x >> y >> z ;
	int p = 1000000007; 
    ll a = power(y , z , p-1) ;
	cout << power(x, a, p) << endl; 
    }
	return 0; 
} 

// This code is contributed by shubhamsingh10 