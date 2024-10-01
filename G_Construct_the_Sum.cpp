#include <bits/stdc++.h>
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, s;
        cin >> n >> s;
        if ((n * (n + 1)) / 2 >= s)
        {
            while (s > 0)
            {
                if (s <= n)
                {
                    cout << s << endl;
                    break;
                }
                s = s - n;
                cout << n << " ";
                n--;
            }
        }
        else
            cout << -1 << endl;
    }

    return 0;
}
