#include <bits/stdc++.h>
using namespace std;

int nearest(vector<int>& active , int start , int end , int value)
{
    while(end - start > 1)
    {
        int mid = start + (end-start)/2 ;
        if(active[mid] >= value)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
    }
    return end;
}

int lis(vector<int>& v)
{
    if(v.size() == 0)
    {
        return 0;
    }
    vector<int> active(v.size() , 0);
    int length = 1;
    active[0] = v[0];
    for(int i  = 1 ; i < v.size() ; i++)
    {
        if(v[i] < active[0])
        {
            active[0] = v[i];
        }
        else if(v[i] > active[length-1])
        {
            active[length++] = v[i];
        }
        else
        {
            active[nearest(active , -1 , length -1 , v[i])] = v[i];
        }
    }
    return length;
}
int main() 
{
int n;
cin >> n ;
vector<int>v(n);
for(int  i = 0 ; i < n ; i++)
{
    cin >> v[i];
}
cout << lis(v) << endl;
}
