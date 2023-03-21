/* Insertion sort 
1. Simple iterate over the unsorted array and 
 check i and i-1 if i < i-1 swap them
 2.Reapeat this swappin while(i < i-1) 
 3. The array is sorted
 Time complexity O(N^2)
 Constant space
*/#include<bits/stdc++.h>
using namespace std;
 void insertion_sort(vector<int>&nums,int n){
    for(int i=1;i<nums.size();i++){
        int mini = nums[i];
        int j = i;
        while(nums[j] < nums[j-1] && j >= 0){
            swap(nums[j],nums[j-1]);
            j--;
        }
    }
    for(auto it:nums){
        cout<<it<<" ";
    }
 }
int main(){
 vector<int>arr = {1 ,33 ,4 ,52 ,2 ,3};

insertion_sort(arr,6);
return 0;
}