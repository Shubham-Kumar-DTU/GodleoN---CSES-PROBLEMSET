#include <bits/stdc++.h>
using namespace std;
#define ll long long
void buildTree(ll* arr , ll* tree , ll start , ll end , ll treenode)
{
    if(start == end)
    {
        tree[treenode] = arr[start];
        return;
    }
    ll mid = start + (end - start) / 2 ;
    buildTree(arr , tree , start , mid , treenode*2);
    buildTree(arr , tree , mid+1 , end , (treenode*2) + 1);

    tree[treenode] = min(tree[treenode*2] , tree[(treenode*2) + 1]);
}

ll query(ll* tree , ll start , ll end , ll treenode , ll left , ll right)
{
    if(start > right || end < left)
    {
        return 1e18 ;
    }

    if(start >= left && end <= right)
    {
        return tree[treenode];
    }

    ll mid = start + (end - start) / 2;
    ll ans1 = query(tree , start , mid , treenode*2 , left , right);
    ll ans2 = query(tree , mid+1 , end , (treenode*2) + 1 , left , right);

    return min(ans1 , ans2);
}

void updateTree(ll* arr , ll* tree , ll start , ll end , ll treenode , ll index , ll value)
{
if(start == end)
{
    arr[index] = value;
    tree[treenode] = value;
    return;
}
int mid = start + (end-start)/2 ;
if(index > mid)
{
    updateTree(arr , tree , mid+1 , end , (treenode*2) + 1 , index , value);
}
else
{
    updateTree(arr , tree , start , mid , (treenode*2) , index , value);
}

tree[treenode] = min(tree[(treenode*2) + 1] , tree[treenode*2]);
}

int main() 
{
    ll n , q ;
    cin >> n >> q  ;
    ll arr[n] = {0};
    for(ll  i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    ll tree[(4*n) + 1];
    for(int  i = 0 ; i < (4*n) + 1 ; i++)
    {
        tree[i] = 1000000001;
    }
    ll start = 0 ;
    ll end = n-1;
    buildTree(arr , tree , start , end , 1);
    while(q--)
    {
        ll a, b, c ;
        cin >> a >> b >> c ;
        if(a == 2)
        {
        cout << query(tree , start , end , 1 , b-1 , c-1) << endl;
        }
        if(a == 1)
        {
        updateTree(arr , tree , start , end , 1 , b-1 , c);    
        }
    }
}