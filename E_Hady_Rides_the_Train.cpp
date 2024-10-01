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
    ll n;
    cin>>n;
    ll rw=(n/4);
    ll cl;
    if(rw%2==0)
    {
        cl=n%4;
    }
    else
    {
        cl=3-(n%4);
    }
    cout<<rw<<" "<<cl;
    return 0;
}
