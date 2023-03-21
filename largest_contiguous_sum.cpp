#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
            if(nums.size()==1) return nums[0];
            
            
           int maximum = INT_MIN;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                    
                    sum += nums[i];
                    maximum = max(sum,maximum);
                    
                    if(sum < 0){
                            
                        sum=0;
                            
                    }
                    
                   
                    
            }
            return maximum;
        
    }
int main(){
 vector<int>arr = { -1 ,33 ,-4 ,-52 ,2 ,3};
 cout<<maxSubArray(arr)<<endl;
return 0;
}