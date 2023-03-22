/* Merge Sort
There are basically two function in merge sort
1.Merge_sort where we split the array hypothetically into two half till there is only single 
element in the array.

2. Merge()  Function this function merge the two arrays into one array or we can say arrange element into 
sorted order.
2.1 In merge func we make a temp array for storing element sorted and then store them in original array


Time complexity =  We are taking half the array and them itrating it whole  = O(log(N)) + O(N);
overal time compelxity is   O(Nlog(N))
Space complexity  since we are using temp array  S(N)
*/
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp; //temperary array

    int left = low;   //left array pointer
    int right = mid+1; // right array pointer

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
   
   for(int i= low;i<=high;i++){
    arr[i] = temp[i-low];   //Putting back values of temp into array

   }


}
void Merge_sort(vector<int>&arr,int low,int high){
    if(low >= high) return ;
     int mid = (low+high)/2;
      Merge_sort(arr,low,mid);
      Merge_sort(arr,mid+1,high);
      merge(arr,low,mid,high);

}
int main(){
vector<int>arr = {10,2,3,2,11,23,444,5};
cout<<"Array before sort: ";
for(auto it:arr){
    cout<<it<<" ";
}
cout<<endl;
Merge_sort(arr,0,arr.size()-1);
cout<<"Array After sort: ";
for(auto it:arr){
    cout<<it<<" ";
}
int n;
return 0;
}
