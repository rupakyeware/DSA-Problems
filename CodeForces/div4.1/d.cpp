#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    unordered_map<int, int> freq;
    map<int, set<int>> count_map; // Stores numbers by their frequency
    int max_freq = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        // Remove old max frequency number from count_map
        if (freq[a[i]] > 0) {
            count_map[freq[a[i]]].erase(a[i]);
            if (count_map[freq[a[i]]].empty()) {
                count_map.erase(freq[a[i]]);
            }
        }

        // Increment frequency
        freq[a[i]]++;
        max_freq = max(max_freq, freq[a[i]]);

        // Insert updated frequency into count_map
        count_map[freq[a[i]]].insert(a[i]);

        // Get any number with max frequency
        b[i] = *count_map[max_freq].begin();
    }

    for (int i : b) cout << i << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
