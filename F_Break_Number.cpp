#include <bits/stdc++.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll res(ll v)
{
    ll cnt=0;
    while (v%2==0)
    {
        v/=2;
        cnt++;
    }
    return cnt;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    ll mx = 0;
    for(int i=0; i<n; i++)
    {
        ll m=res(a[i]);
        mx=max(m, mx);
    }
    cout << mx << '\n';
    return 0;
}
