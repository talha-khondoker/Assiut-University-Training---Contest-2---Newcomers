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
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j && i!=n/2 && j!=n/2)
            {
                cout<<"\\";
            }
            else if(i==n/2 && j==n/2)
            {
                cout<<"X";
            }
            else if(j!=n/2 && i==((n-1)-j))
            {
                cout<<"/";
            }
            else
            {
                cout<<"*";
            }
        }
            cout<<'\n';
    }
    return 0;
}
