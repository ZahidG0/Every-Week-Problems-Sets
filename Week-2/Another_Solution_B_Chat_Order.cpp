#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    unordered_set<string> seen;
    
    // Traverse backwards from the most recent message to the oldest
    for (int i = n - 1; i >= 0; i--) {
        if (seen.find(names[i]) == seen.end()) {
            seen.insert(names[i]);
            cout << names[i] << "\n";
        }
    }

    return 0;
}