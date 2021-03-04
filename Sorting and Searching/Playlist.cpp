//GODLEON'S CODE
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
 
int main()
{
int n;
cin >> n;
vector<int>v(n);
for(int i = 0 ; i < n ; i++)
{
    cin >> v[i];
}
set<int> s ;
long long int maximum = 1;
s.insert(v[0]);
int pos = 0 ;
for(int i = 1 ; i < n ; i++)
{
    if(s.find(v[i]) == s.end())
    {
        s.insert(v[i]);
        long long int x = s.size();
        maximum = max(x , maximum);
    }
    else
    {
        while(v[pos] != v[i])
        {
            s.erase(v[pos]);
            pos++;
        }
        s.erase(v[pos]);
        pos++;
        s.insert(v[i]);
        long long int x = s.size();
        maximum = max(x,maximum);
    }
}
cout << maximum << endl;
}
