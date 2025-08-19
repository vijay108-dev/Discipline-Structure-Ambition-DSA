#include <iostream>
#include <vector>
using namespace std;

vector<int>twoSum(const vector<int>& nums,int target){
int n=nums.size();
  for(int i=0;i<n;i++){
       for(int j=i+1;j < n; j++) {
          if(nums[i]+nums[j] == target){
              return {i, j}; //return
          }
      }
  }
    return vector<int>(); // return empty vector if no solution exist
}

int main() {
vector<int> nums ={2, 7, 11, 15};
int target =9;

    vector<int>ans=twoSum(nums, target);

 cout<<"["<< ans[0]<<","<<ans[1]<<"]"<<endl;

    return 0;
}
