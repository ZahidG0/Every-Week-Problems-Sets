#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int ans = 0;
    if (a > b)
    {
        ans += a;
        a--;
        if (a >= b)
        {
            ans += a;
        }
        else
        {
            ans += b;
        }
    }
    else if (b > a)
    {
        ans += b;
        b--;
        if (b >= a)
        {
            ans += b;
        }
        else
        {
            ans += a;
        }
    }
    else
    {
        ans = a + b;
    }

    cout << ans << endl;

    return 0;
}