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

    vector<ll> ans(n);

    int cnt = 0;
    int val = 1;

    int fast = 0;

    while (fast < n)
    {
        if (s[fast] == '1')
        {
            cnt++;
            ans[fast] = val;
            val++;

            if (cnt == k)
            {
                break;
            }
        }
        else
        {
            cnt = 0;
        }

        fast++;
    }

    if (fast < n)
    {
        no;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ans[i] = val;
            val++;
        }
    }

    yes;

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    cout << nl;
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