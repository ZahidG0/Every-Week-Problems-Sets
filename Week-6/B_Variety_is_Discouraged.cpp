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
    ll n;
    cin >> n;

    vector<ll> arr(n);
    map<ll, ll> freq;

    for (auto &x : arr)
    {
        cin >> x;
        freq[x]++;
    }

    ll slow = 0, fast = 0;
    ll ansL = -1, ansR = -1;
    ll len = 0;

    while (slow < n)
    {
        if (freq[arr[slow]] != 1)
        {
            slow++;
            continue;
        }

        fast = slow;

        while (fast < n && freq[arr[fast]] == 1)
        {
            fast++;
        }

        if (fast - slow > len)
        {
            len = fast - slow;
            ansL = slow;
            ansR = fast;
        }

        slow = fast;
    }

    if (ansL == -1)
    {
        cout << 0 << nl;
    }
    else
    {
        cout << ansL + 1 << " " << ansR << nl;
    }
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