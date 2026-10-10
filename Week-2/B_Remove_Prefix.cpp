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

    unordered_set<int> uniq_ele;

    for (int i = n - 1; i >= 0; --i)
    {
        if (uniq_ele.find(arr[i]) == uniq_ele.end())
        {
            uniq_ele.insert(arr[i]);
        }
        else
        {
            cout << i + 1 << "\n";
            return;
        }
    }

    cout << 0 << "\n";
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