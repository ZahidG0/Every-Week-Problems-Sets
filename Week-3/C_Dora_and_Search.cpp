#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (auto &i : arr)
    {
        cin >> i;
    }

    int l = 0;
    int r = n - 1;
    int main_val = 1, max_val = n;

    while (l < r)
    {
        if (arr[l] == main_val)
        {
            l++;
            main_val++;
        }
        else if (arr[l] == max_val)
        {
            l++;
            max_val--;
        }
        else if (arr[r] == main_val)
        {
            r--;
            main_val++;
        }
        else if (arr[r] == max_val)
        {
            r--;
            max_val--;
        }
        else
        {
            cout << l + 1 << " " << r + 1 << "\n";
            return;
        }
    }

    cout << -1 << '\n';
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