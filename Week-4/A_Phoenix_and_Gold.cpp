#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int at = 0;
    int total = 0;

    while (at < n && total < x)
    {
        total += a[at];
        at++;
    }

    if (total == x)
    {
        if (at == n)
        {
            cout << "NO\n";
            return;
        }

        swap(a[at - 1], a[at]);
    }

    cout << "YES\n";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n";
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