// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int start, int end)
{
		if (start >= end) return ;
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		reverseArray(arr, start + 1, end - 1);
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int t;
  cout << "Enter the no. of inputs :";
  cin >> t;

  while(t--){
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array :";
    for(int i = 0;i < n; i++){
      cin >> arr[i];
    }

    cout << "The orginal array was :" << endl;
    // To print original array
  	printArray(arr, n);

  	// Function calling
  	reverseArray(arr, 0, n-1);

  	cout << "Reversed array is" << endl;

  	// To print the Reversed array
  	printArray(arr, n);
  }



	return 0;
}
