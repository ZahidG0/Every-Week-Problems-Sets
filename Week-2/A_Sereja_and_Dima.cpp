#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    int j = n - 1;

    int sereja_sum = 0;
    int dima_sum = 0;

    bool sereja_turn = true;

    while (i <= j)
    {
        if (arr[i] > arr[j])
        {
            if (sereja_turn)
            {
                sereja_sum += arr[i];
            }
            else
            {
                dima_sum += arr[i];
            }

            i++;
        }

        else
        {
            if (sereja_turn)
            {
                sereja_sum += arr[j];
            }
            else
            {
                dima_sum += arr[j];
            }

            j--;
        }

        sereja_turn = !sereja_turn;
    }

    cout << sereja_sum << " " << dima_sum << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}