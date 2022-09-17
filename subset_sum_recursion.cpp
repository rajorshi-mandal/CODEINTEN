// Recursion
// Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum.

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:

    bool helper(vector<int> A,int Sum, int tempSum, int i){
      //Base cases
      if(Sum == tempSum){
        return true;
      }

      if(i >= A.size()){
        return false;
      }

      int recCall1 = helper(A, Sum, tempSum + A[i], i + 1);
      int recCall2 = helper(A, Sum, tempSum, i + 1);

      return recCall1 || recCall2;
    }

    bool isSubsetSum(vector<int>arr, int sum){
        return helper(arr, sum, 0, 0);
        // code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cout << "Enter number of total inputs :";
    cin>>t;
    while(t--)
    {
        cout << "Enter array size :";
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        cout << "Enter the array elements :";
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cout << "Enter the value of the sum :";
        cin >> sum;

        Solution ob;
        cout << "Ans :" <<ob.isSubsetSum(arr, sum) << endl;
    }
    return 0;
}
  // } Driver Code Ends
