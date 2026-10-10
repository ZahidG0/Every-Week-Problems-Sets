#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int customer_No = 1;

    set<pair<int, int>> st;
    multiset<pair<int, int>> mst;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int money;
            cin >> money;

            st.insert({customer_No, money});
            mst.insert({money, -customer_No});

            customer_No++;
        }
        else if (type == 2)
        {
            int position = st.begin()->first;
            int money = st.begin()->second;

            ans.push_back(position);

            st.erase(st.begin());
            mst.erase({money, -position});
        }
        else
        {
            int position = -mst.rbegin()->second;
            int money = mst.rbegin()->first;

            ans.push_back(position);

            st.erase({position, money});
            mst.erase(--mst.end());
        }
    }

    for (auto val : ans)
    {
        cout << val << " ";
    }

    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}