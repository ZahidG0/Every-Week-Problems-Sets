#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, k;
    cin >> a >> b >> k;

    if (a == b)
    {
        cout << "0" << endl;
        return;
    }

    int diff = abs(a - b);
    if (diff % k == 0)
    {
        cout << diff / k << endl;
    }
    else
    {
        cout << (diff / k) + 1 << endl;
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