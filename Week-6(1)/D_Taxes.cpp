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

bool isPrime(ll n)
{
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void ZH_Solve()
{
    ll n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1 << nl;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << nl;
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << nl;
        }
        else
        {
            cout << 3 << nl;
        }
    }
}

int main()
{
    Fast_IO;

    ZH_Solve();

    return 0;
}