#include<bits/stdc++.h>
using namespace std;

// int single_Number(vector<int>&nums){  //brute force using sorting
//      if(nums.size() == 0){
//           return 0;     
//      }
//      sort(nums.begin(),nums.end());
//      for(int i=0;i<nums.size()-1;i+=3){
//             if(nums[i] != nums[i+1]){
//                return nums[i];
//             }   
//      }
//      return nums[nums.size() -1];     
// }  
int single_Number(vector<int>&nums){ // using bit manupulation 
   
    int ans=0;
    for(int i=0;i<32;i++){
      int sumofBits =0;

      for(int j=0;j<nums.size();j++){
        if((nums[j]>>i)& 1){
          sumofBits++;
        }
      }
      if(sumofBits %3!=0){
        ans |=(1<<i);
      }
    }
    return ans;
}
int main()
{
     int n;
     cin>>n;
     vector<int>nums(n);
     for(int i=0;i<n;i++){
         cin>>nums[i];      
     }
  int i= single_Number(nums);
  cout<<i<<endl;
     return 0;
}
