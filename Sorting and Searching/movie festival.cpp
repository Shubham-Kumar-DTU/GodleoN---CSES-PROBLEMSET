#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

bool comparator (pair<int , int> &a , pair<int,int> &b)
{
    return b.second > a.second;
}

int main() 
{
 int n;
 cin >> n ;   
 vector<pair<int,int>>v(n);
 for(int i = 0 ; i < n ; i++)
 {
     int a , b;
     cin >> a >> b;
     v[i] = make_pair(a,b);
 }
 sort(v.begin(),v.end() , comparator);
 int start = v[0].first ;
 int end = v[0].second ;
 int count = 1;
 for(int i = 1 ;i < n ; i++)
 {
     if(v[i].first < end)
     {
         continue;
     }
     else
     {
         count++;
         end = v[i].second;
         start = v[i].first;
     }
 }
 cout << count << endl;
}

