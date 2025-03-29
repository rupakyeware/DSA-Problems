//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int longest = 0;
        map<long long,int> umap;
        long long sumx = 0;
        
        for(int x = 0; x < arr.size(); x++) {
            sumx += arr[x];
            if (sumx == k) longest = max(longest, x+1);
            
            long long prefix = sumx - k;
            if(umap.find(prefix) != umap.end()) {
                int len = x - umap[prefix];
                longest = max(longest, len);
            }
            
            if(umap.find(sumx) == umap.end()) {
                umap[sumx] = x;
            }
            
        }
        
        return longest;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends
