#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int M, N;
    cin >> M >> N;

    if (N < M)
    {
        cout << M - N << '\n';
    }
    else
    {
        if ((N - M) % 2 == 0)
        {

            cout << 0 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}