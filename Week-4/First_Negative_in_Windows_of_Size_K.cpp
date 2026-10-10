#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;
    for (int i = 0; i <= n - k; i++)
    {
        bool isOk = true;

        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                ans.push_back(arr[j]);
                isOk = false;
                break;
            }
        }

        if (isOk)
        {
            ans.push_back(0);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
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