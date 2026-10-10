#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int day = 1;
    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] >= day)
        {
            day++;
        }
    }

    cout << day - 1 << endl;

    return 0;
}