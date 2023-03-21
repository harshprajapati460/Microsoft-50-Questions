

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// First method is simple just iterate over 
/* the array and in the inner loop find the 
element target - nums[i]
Time complexity is O(N^2)
Space complexity will be S(1)
Code :*/
vector<int>twosum2(vector<int>&nums, int target){
    int n = nums.size();
    for(int i=0;i<n;i++){
        int key = target - nums[i];
        for(int j = i+1;j<n;j++){
            if(key == nums[j]){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
/* 1.First method is simple just iterate over 
 the array and make a map to store nums[i]
2. Store nums[i]  if target - nums[i]  not found in map
3. Repeat Untill you fount your and
Time complexity is O(N)
Space complexity will be S(N)
Code :*/
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int num = target - nums[i];
            if(map.find(num) == map.end()){
                map[nums[i]] = i;
            }
            else {
                return {map[target-nums[i]],i};
            }
        }
        return {-1,-1};
    }
};

int main(){
    Solution obj;
    vector<int>arr = {3,2,4};
    int target = 6;
    obj.twoSum(arr,target);

    obj.twosum2(arr,target);
}