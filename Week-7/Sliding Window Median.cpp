/* Author: Md. Zahid Hasan (GuRu) */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>,
                  rb_tree_tag, tree_order_statistics_node_update>;

#define Fast_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define ll long long
#define ld long double

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define pb push_back
#define pf push_front
#define nl '\n'

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

/* ******* NEVER GIVE UP.
You'll reap the rewards of your hard work. ******* */

void ZH_Solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    int l = 0, r = 0;
    pbds<pair<int, int>> p;

    while (r < n)
    {
        p.insert({arr[r], r});

        if (r - l + 1 == k)
        {
            int pos = k / 2;
            if (k % 2 == 0)
            {
                pos--;
            }

            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({arr[l], l});
            l++;
        }

        r++;
    }
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}