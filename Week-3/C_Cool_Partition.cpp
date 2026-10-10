#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 1;
    set<int> st1;
    st1.insert(a[0]);
    vector<int> curr_st;

    for (int i = 1; i < n; i++)
    {
        if (st1.find(a[i]) != st1.end())
        {
            curr_st.push_back(a[i]);
            st1.erase(a[i]);
            if (st1.empty())
            {
                ans++;
                for (int i = 0; i < curr_st.size(); i++)
                {
                    st1.insert(curr_st[i]);
                }
                curr_st.clear();
            }
        }
        else
        {
            curr_st.push_back(a[i]);
        }
    }

    cout << ans << "\n";
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