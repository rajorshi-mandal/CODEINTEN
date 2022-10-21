#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> ans;

void helper(vector<int>& nums, int i){
      if(i == nums.size()){
          ans.push_back(nums);
          return;
      }

      for(int j = i; j < nums.size(); j++){
          swap(nums[i], nums[j]);
          helper(nums, i + 1);
          //backtrack
          swap(nums[i], nums[j]);
      }
      return;
  }

vector<vector<int>> permute(vector<int>& nums) {
    helper(nums, 0);
    return ans;
}

int main(){

  int t;
  cout << "Enter total no. of inputs :";
  cin >> t;
  while(t--){
    int size;
    cout << "Enter the size of the vector array:";
    cin >> size;

    vector<int> nums;
    for(int i = 0; i < size; i++){
      int e;
      cin >> e;
      nums.push_back(e);
    }
  }

  vector<vector<int>> permute(vector<int>& nums);

  for(int i = 0; i < ans.size(); i++){
    for(int j = 0; j < ans[i].size(); j++){
      cout << ans[i][j];
    }
  }

  return 0;
}
