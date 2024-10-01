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
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll l, r;
        cin>>l>>r;
        ll mx, mn;
        mx=max(l,r);
        mn=min(l,r);
        mn--;
        ll sum1 =  mn * (mn + 1) / 2;
        ll sum2 =  mx * (mx + 1) / 2;
        ll sum=sum2-sum1;
        cout<<sum<<'\n';
    }
    return 0;
}
