#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> curr_preffix_sum(n);

    curr_preffix_sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        curr_preffix_sum[i] = curr_preffix_sum[i - 1] + arr[i];
    }

    map<ll, ll> old_prefix;

    old_prefix[0] = 1;

    int fast = 0;
    ll cnt = 0;

    while (fast < n)
    {
        ll need_prffix = curr_preffix_sum[fast] - x;

        cnt += old_prefix[need_prffix];

        old_prefix[curr_preffix_sum[fast]]++;

        fast++;
    }

    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}