#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<long long> arr;
    for (int i = 0; i < n; i++)
    {
        long long x1;
        cin >> x1;

        if (x1 != x)
        {
            arr.push_back(x1);
        }
    }
    for (long long val : arr)
    {
        cout << val << " ";
    }

    return 0;
}