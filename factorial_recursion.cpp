// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){
        //code here
        if (N == 0)
            return 1;
        return N * factorial(N - 1);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cout << "Enter the no. of inputs ";
    cin>>t;
    while(t--)
    {
        cout<< "Enter the number : ";
        int N;
        cin>>N;
        Solution ob;
        cout << "The factorial of " << N << " is " << ob.factorial(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
