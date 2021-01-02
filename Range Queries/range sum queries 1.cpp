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

    tree[treenode] = tree[treenode*2] + tree[(treenode*2) + 1];
}

ll query(ll* tree , ll start , ll end , ll treenode , ll left , ll right)
{
    if(start > right || end < left)
    {
        return 0 ;
    }

    if(start >= left && end <= right)
    {
        return tree[treenode];
    }

    ll mid = start + (end - start) / 2;
    ll ans1 = query(tree , start , mid , treenode*2 , left , right);
    ll ans2 = query(tree , mid+1 , end , (treenode*2) + 1 , left , right);

    return ans1  + ans2;
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
    ll tree[(4*n) + 1] = {0};
    ll start = 0 ;
    ll end = n-1;
    buildTree(arr , tree , start , end , 1);
    while(q--)
    {
        ll a, b ;
        cin >> a >> b ;
        cout << query(tree , start , end , 1 , a-1 , b-1) << endl;
    }
}
