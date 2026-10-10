#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[i] = {val, i + 1};
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            ll curr_sum = arr[i].first + arr[l].first + arr[r].first;

            if (curr_sum == x)
            {
                cout << arr[i].second << " " << arr[l].second << " " << arr[r].second << "\n";
                return;
            }
            if (curr_sum > x)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
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


/* #include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define sp ' '
#define ll long long
#define vii vector<pair<int, int>>

#define len(x) int((x).size())
#define all(n) n.begin(), n.end()

void solve() {
    int n, x;
    cin >> n >> x;

    vii arr(n);

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr[i] = {val, i + 1};
    }

    sort(all(arr));

    for (int i = 0; i < n - 2; i++) {
        ll tsum = x - arr[i].first;

        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            ll csum = arr[j].first + arr[k].first;

            if (csum > tsum) {
                k--;
            }
            else if (csum < tsum) {
                j++;
            }
            else {
                cout << arr[i].second << sp
                     << arr[j].second << sp
                     << arr[k].second << nl;
                return;
            }
        }
    }

    cout << "IMPOSSIBLE" << nl;
}

int main() {
    int t = 1;

    while (t--)
        solve();
} */