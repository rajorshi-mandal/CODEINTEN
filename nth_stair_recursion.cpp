//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here

        //base case
        if ( n == 1 || n == 2 ){
            return n;
        }

        //recursive call
        int reCall1 = countWays( n - 1 );
        int reCall2 = countWays( n - 2 );

        //small calculation
        int smallCal = countWays( n - 1 )  + countWays( n - 2 );

        return smallCal;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cout << "Enter the no. of inputs :";
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cout << "Enter the final stair no :";
        cin>>m;
        Solution ob;
        cout<< "The possible ways are :" <<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends
