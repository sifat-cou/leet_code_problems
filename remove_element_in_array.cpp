#include<bits/stdc++.h>
using namespace std;
int remove_element(vector<int>&nums,int val){
      int k=0;
      for(int i=0;i<nums.size();i++){
         if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
         }
      }
      return k;           
}
int main()
{
     int n,val;
     cin>>n>>val;

     vector<int>nums(n);
     for(int i=0;i<n;i++){
        cin>>nums[i];       
     }
     int k=remove_element(nums,val);
     for(int i=0;i<k;i++){
         cout<<nums[i]<<" ";
     }
     return 0;
}
