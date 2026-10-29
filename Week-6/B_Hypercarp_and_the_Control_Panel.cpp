/* Author: Md. Zshid Hasan (GuRu) */

#include <bits/stdc++.h>
using namespace std;

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
    int n;
    cin >> n;

    vector<int> arr(n);

    for (auto &x : arr)
    {
        cin >> x;
    }

    vector<pair<int, int>> modules;

    for (int i = 0; i < n; i++)
    {
        if (modules.empty() || modules.back().first != arr[i])
        {
            modules.push_back({arr[i], 1});
        }
        else
        {
            modules.back().second++;
        }
    }

    int ans = modules.size();

    for (int i = 0; i < ans - 1; i++)
    {
        if (modules[i].second > 1 && modules[i + 1].second > 1)
        {
            cout << ans + 2 << nl;
            return;
        }
    }

    for (int i = 0; i < ans; i++)
    {
        if (i < ans - 1 && modules[i].second > 1 &&
            (i + 2 >= ans || modules[i + 2].first != modules[i].first))
        {
            cout << ans + 1 << nl;
            return;
        }

        if (i > 0 && modules[i].second > 1 &&
            (i - 2 < 0 || modules[i - 2].first != modules[i].first))
        {
            cout << ans + 1 << nl;
            return;
        }
    }

    cout << ans << nl;
}

int main()
{
    Fast_IO;

    int tc;
    cin >> tc;

    while (tc--)
    {
        ZH_Solve();
    }

    return 0;
}