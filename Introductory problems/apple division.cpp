#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mindif(ll* arr , ll i , ll sum , ll cursum)
{
 if(i==0)
 {
     return abs((sum - cursum)-cursum);
 }
 return min(mindif(arr , i-1 , sum , cursum) , mindif(arr , i-1 , sum , cursum + arr[i]));
}

int main() 
{
    ll n ;
    cin >> n ;
    ll* arr = new ll[n];
    ll sum = 0 ;
    for(ll i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << mindif(arr , n-1 , sum, 0) << endl;
}
