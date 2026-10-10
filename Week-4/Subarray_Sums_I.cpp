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

    int slow = 0, fast = 0, cnt = 0;
    ll curr_sum = 0;

    while (fast < n)
    {
        curr_sum += arr[fast];

        while (curr_sum > x)
        {
            curr_sum -= arr[slow];
            slow++;
        }

        if (curr_sum == x)
        {
            cnt++;
        }
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