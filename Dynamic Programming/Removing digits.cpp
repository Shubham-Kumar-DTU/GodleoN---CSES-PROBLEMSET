#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n; cin >> n ;
    if(n <= 9)
    {
        cout << 1 << endl;
    }
    else
    {
    int dp[n+1] = {0};
    for(int i = 0 ; i <= n ; i++)
    {
        dp[i] = 1000000000;
    }  
    dp[1] = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        if(i <= 9)
        {
            dp[i] = 1 ;
        }
        else
        {
            int k = i ;
            while(k != 0)
            {
                int r = k % 10;
                dp[i] = min(1 + dp[i - r] , dp[i]);
                k = k/10;
            }
        }
    }
    cout << dp[n] << endl;
    }
}
