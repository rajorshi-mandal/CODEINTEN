//Problem from gfg used recursive tree here
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here

        //base case
        if(n == 0){
            return 0;
        }

        if(n == 1){
            return 1;
        }

        //recursive call
        long long int reCall1 = nthFibonacci( n - 1 );
        long long int reCall2 = nthFibonacci( n - 2 );

        //small calculation
        long long int smallCall = reCall1 + reCall2;

        return smallCall;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cout << " Enter the no. of inputs " ;
    cin >> t;
    while (t--) {
        long long int n;
        cout << " Enter the nth element index " ;
        cin >> n;
        Solution ob;
        cout << " The " << n << "th element of fibonacci series is " << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
