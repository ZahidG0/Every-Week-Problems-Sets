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

    vector<int> arr(n);

    int total_one = 0;

    for (auto &x : arr)
    {
        cin >> x;

        if (x == 1)
        {
            total_one++;
        }
    }

    if (total_one < k)
    {
        cout << -1 << nl;
        return;
    }

    int slow = 0, fast = 0, oper = 0;
    int max_len = 0;

    while (fast < n)
    {
        oper += arr[fast];

        while (oper > k)
        {
            oper -= arr[slow];
            slow++;
        }

        if (oper == k)
        {
            max_len = max(max_len, fast - slow + 1);
        }
        fast++;
    }

    cout << n - max_len << nl;
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