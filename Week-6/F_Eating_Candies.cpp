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

    int cnt = 0;
    int alice = 0, bob = n - 1;

    int sum_A = 0, sum_B = 0;

    while (alice <= bob)
    {
        if (sum_A <= sum_B)
        {
            sum_A += arr[alice];
            alice++;
        }
        else
        {
            sum_B += arr[bob];
            bob--;
        }

        if (sum_A == sum_B)
        {
            int total = alice + (n - bob - 1);
            cnt = max(cnt, total);
        }
    }

    cout << cnt << nl;
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