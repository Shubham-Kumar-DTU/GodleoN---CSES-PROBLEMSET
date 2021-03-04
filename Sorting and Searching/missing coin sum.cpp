#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main() 
{
    ull n;
    cin >> n ;
    vector<ull>v(n);
    for(ull i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }
    sort(v.begin() , v.end());
    ull ans = 1 ;
    bool done = 0;
    for(ull i = 0 ; i < n ; i++)
    {
        if(ans < v[i])
        {
            cout << ans << endl;
            done = 1;
            break;
        }
        else
        {
            ans += v[i];
        }
    }
    if(!done)
    {
        cout << ans << endl;
    }
}
