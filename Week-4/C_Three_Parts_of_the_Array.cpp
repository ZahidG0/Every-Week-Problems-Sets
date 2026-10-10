/* #include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = n - 1;

    ll ans = 0;
    ll sum_l = 0;
    ll sum_r = 0;

    while (l <= r)
    {
        if (sum_l <= sum_r)
        {
            sum_l += arr[l];
            l++;
        }
        else
        {
            sum_r += arr[r];
            r--;
        }

        if (sum_l == sum_r)
        {
            ans = max(ans, sum_l);
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> prefix_sum(n);
    vector<ll> suffix_sum(n);

    prefix_sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    suffix_sum[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suffix_sum[i] = suffix_sum[i + 1] + arr[i];
    }

    ll ans = 0;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (prefix_sum[i] == suffix_sum[j])
        {
            ans = max(ans, prefix_sum[i]);
        }

        if (prefix_sum[i] < suffix_sum[j])
            i++;
        else
            j--;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}