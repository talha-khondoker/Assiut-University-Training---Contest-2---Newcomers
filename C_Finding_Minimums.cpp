#include <bits/stdc++.h>
#define ll long long
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, k;
    cin>>n>>k;
    ll j=0, mn=INT_MAX;
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        mn=min(mn, x);
        j++;
        if(j==k || i==n)
        {
            cout<<mn<<" ";
            j=0;
            mn=INT_MAX;
        }
    }
    
    return 0;
}
