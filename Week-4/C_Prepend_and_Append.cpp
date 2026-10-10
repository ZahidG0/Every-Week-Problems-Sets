#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (s[l] != s[r])
        {
            l++;
            r--;
        }
        else
        {
            break;
        }
    }

    if (r < l)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << r - l + 1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }

    return 0;
}