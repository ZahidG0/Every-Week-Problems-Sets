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

    vector<int> freq(n + 1, 0);

    for (auto &x : arr)
    {
        cin >> x;
        freq[x]++;
    }

    int ans = 0;
    for (int sum = 2; sum <= 2 * n; sum++)
    {
        int cnt = 0;
        for (int x = 1; x <= n; x++)
        {
            int y = sum - x;

            if (y < 1 || y > n)
            {
                continue;
            }

            if (x <= y)
            {
                if (x == y)
                {
                    cnt += freq[x] / 2;
                }
                else
                {
                    cnt += min(freq[x], freq[y]);
                }
            }
        }

        ans = max(ans, cnt);
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