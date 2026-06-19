#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(vector<int>&nums){
   if(nums.size()==0){
      return 0;
   }
   int i=0;
   for(int j=1;j<nums.size();j++){
      if(nums[j]!=nums[i]){
         i++;
         nums[i]=nums[j];
      }
   }
   return i+1;
}
int main()
{
     int n;
     cin>>n;
     vector<int>nums;
    for(int i=0;i<n;i++){
      int val;
      cin>>val;
       nums.push_back(val);
    }
    int k=remove_duplicate(nums);
    for(int i=0;i<k;i++){
      cout<<nums[i]<<" ";
    }
     return 0;
}
