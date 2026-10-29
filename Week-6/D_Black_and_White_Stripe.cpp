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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt_w = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'W')
        {
            cnt_w++;
        }
    }

    int ans = cnt_w;
    for (int i = k; i < n; i++)
    {
        if (s[i - k] == 'W')
        {
            cnt_w--;
        }
        if (s[i] == 'W')
        {
            cnt_w++;
        }

        ans = min(ans, cnt_w);
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