#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    if (k >= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (n - k) << endl;
    }

    return 0;
}