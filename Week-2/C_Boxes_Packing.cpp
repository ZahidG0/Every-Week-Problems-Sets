#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> arr(n);
    map<ll, int> freq;
    int max_freq = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        freq[arr[i]]++;
    }

    for (auto [key, count] : freq)
    {
        max_freq = max(max_freq, count);
    }

    cout << max_freq << "\n";

    return 0;
}
