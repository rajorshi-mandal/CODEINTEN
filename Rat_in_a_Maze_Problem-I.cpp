//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:

    vector<string> ans;

    bool isSafe ( vector<vector<int>> &m, vector<vector<int>> &visited, int scrx, int scry, int n ) {
        if ( scrx >= 0 && scry >= 0 && scrx < n && scry < n && m[scrx][scry] == 1 && !visited[scrx][scry] ) {
            return true;
        }
        return false;
    }

    void helper ( vector<vector<int>> &m, vector<vector<int>> &visited, int n, int scrx, int scry, string temp ) {
        if ( scrx == n - 1 && scry == n - 1 ) {
            ans.push_back( temp );
            return;
        }

        visited[scrx][scry] = 1;

        if ( isSafe( m, visited, scrx + 1, scry, n ) ) {
            helper( m, visited, n,scrx + 1, scry, temp + "D");
        }

        if ( isSafe( m, visited, scrx, scry - 1, n ) ) {
            helper( m, visited, n, scrx, scry - 1, temp + "L");
        }

        if ( isSafe( m, visited, scrx, scry + 1, n ) ) {
            helper( m, visited, n, scrx, scry + 1, temp + "R");
        }

        if ( isSafe( m, visited, scrx - 1, scry, n ) ) {
            helper( m, visited, n, scrx - 1, scry, temp + "U");
        }

        visited[scrx][scry] = 0;
    }

    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        if ( m[0][0] == 0 ) return ans;
        vector<vector<int>> visited ( n, vector<int> ( n, 0));
        helper ( m, visited, n, 0, 0, "");
        return ans;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
