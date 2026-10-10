#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    map<int, int> first_indx, last_indx;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (first_indx.find(x) == first_indx.end())
        {
            first_indx[x] = i;
        }
        last_indx[x] = i;
    }

    for (int i = 0; i < k; ++i)
    {
        int a, b;
        cin >> a >> b;

        if (first_indx.count(a) && last_indx.count(b) && first_indx[a] < last_indx[b])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
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