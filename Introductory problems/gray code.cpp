#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n ;
    vector<string> v;
    v.push_back("0");
    v.push_back("1");
    while(n > 1)
    {
        for(int i = v.size() - 1 ; i >=0 ; i--)
        {
            v.push_back(v[i]);
        }
        for(int i = 0 ; i < v.size()/2 ; i++)
        {
            v[i] = v[i] + "0";
        }
        for(int i = v.size()/2 ; i < v.size() ; i++)
        {
            v[i] = v[i] + "1";
        }
        n--;
    }
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i] << endl;
    }
}
