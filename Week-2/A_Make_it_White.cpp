#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int first_B = 0;
    int last_B = n - 1;

    while (first_B < n)
    {
        if (s[first_B] == 'B')
        {
            break;
        }
        first_B++;
    }
    while (last_B >= 0)
    {
        if (s[last_B] == 'B')
        {
            break;
        }
        last_B--;
    }

    cout << last_B - first_B + 1 << endl;
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