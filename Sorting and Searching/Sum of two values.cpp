#include <bits/stdc++.h>
using namespace std;
int main() 
{
int n , k ;
cin >> n >> k ;
vector<pair<int , int>> v(n);
for(int  i = 0 ; i < n ; i++)
{
    int a ; 
    cin >> a ;
    v[i].first = a ;
    v[i].second = i+1;
}
sort(v.begin() , v.end());
int i = 0 ; 
int  j = n-1;
bool ans = 0 ;
while(i < j)
{
if(v[i].first + v[j].first == k)
{
    cout << min(v[i].second , v[j].second) << " " << max(v[j].second , v[i].second) << endl;
    ans = 1;
    break;
}
if(v[i].first + v[j].first < k)
{
    i++;
}
if(v[i].first + v[j].first > k)
{
    j--;
}
}
if(!ans)
{
    cout << "IMPOSSIBLE" << endl;
}
}
