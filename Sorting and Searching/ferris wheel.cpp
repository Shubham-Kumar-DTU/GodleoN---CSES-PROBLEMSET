#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n ;
    int x ;
    cin >> x ;
    int* arr = new int[n];
    for(int  i = 0 ;i < n ; i++)
    {
        cin >> arr[i];
    }
    sort(arr , arr + n);
    int  i = 0 ;
    int j = n-1;
    int count = 0 ;
    while(i <= j)
    {
        if(i == j)
        {
            count++;
            break;
        }
        else if(arr[i] <= (x - arr[j]))
        {
            count++;
            i++;
            j--;
        }
        else
        {
            count++;
            j--;
        }
    }
    cout << count << endl;
}
