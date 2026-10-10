#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left_sum = 0;
    for (int i = 0; i < l - 1; i++)
    {
        left_sum += arr[i];
    }

    int right_sum = 0;
    for (int i = r; i < n; i++)
    {
        right_sum += arr[i];
    }

    cout << max(left_sum, right_sum) << "\n";
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