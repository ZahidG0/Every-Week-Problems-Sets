#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
    {
        cout << "<" << endl;
    }
    else if (a > b)
    {
        cout << ">" << endl;
    }
    else
    {
        cout << "=" << endl;
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