#include <bits/stdc++.h>
using namespace std;
int main() 
{
string s;
cin >> s ;
int arr[26] = {0};
for(int  i = 0 ; i < s.size() ; i++)
{
    arr[s[i] - 'A']++;
}
int odd = 0 ;
for(int i = 0 ; i < 26 ; i++)
{
    if(arr[i]%2) odd++;
}

if(odd > 1)
{
    cout << "NO SOLUTION" << endl;
}
else
{
    if(odd == 1)
    {
        for(int i = 0 ; i < 26 ; i++)
        {
            int k = arr[i];
            if(k % 2 == 0)
            {
            while(k > arr[i]/2)
            {
                cout << char('A' + i);
                k--;
            }
            }
        }
        for(int i = 0 ; i < 26 ; i++)
        {
            int k = arr[i];
            if(k % 2)
            {
                while(k--)
                {
                    cout << char('A' + i);
                }
            }
        }
        for(int i = 25 ; i >= 0 ; i--)
        {
            int k = arr[i];
            if(k % 2 == 0)
            {
            while(k > arr[i]/2)
            {
                cout << char('A' + i);
                k--;
            }
            }
        }
        cout << endl;
    }
    else
    {
       for(int i = 0 ; i < 26 ; i++)
        {
            int k = arr[i];
            if(k % 2 == 0)
            {
            while(k > arr[i]/2)
            {
                cout << char('A' + i);
                k--;
            }
            }
        }
        for(int i = 25 ; i >= 0 ; i--)
        {
            int k = arr[i];
            if(k % 2 == 0)
            {
            while(k > arr[i]/2)
            {
                cout << char('A' + i);
                k--;
            }
            }
        }
        cout << endl; 
    }
}
}
