#include<bits/stdc++.h>
using namespace std;
#define mod               1000000007
int main()
{
    int n;
    cin >> n ;
    if(n <= 6)
    {
        cout << pow(2,n-1) << endl;
    }
    else
    {
    int dp[n+1] = {0};
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;
    for(int i = 7 ; i <= n ; i++)
    {
        dp[i] += dp[i-1] % mod;
        dp[i] = dp[i] % mod;
        dp[i] += dp[i-2] % mod;
        dp[i] = dp[i] % mod;
        dp[i] += dp[i-3] % mod;
        dp[i] = dp[i] % mod;
        dp[i] += dp[i-4] % mod;
        dp[i] = dp[i] % mod;
        dp[i] += dp[i-5] % mod;
        dp[i] = dp[i] % mod;
        dp[i] += dp[i-6] % mod;
        dp[i] = dp[i] % mod;
    }
    cout << dp[n] % mod << endl;
    }
}