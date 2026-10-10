#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> need_val;

    for (int i = 0; i < n; i++)
    {
        int need = x - arr[i];

        if (need_val.find(need) != need_val.end())
        {
            cout << need_val[need] << " " << i + 1 << "\n";
            return;
        }

        need_val[arr[i]] = i + 1;
    }

    cout << "IMPOSSIBLE\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}