#include<bits/stdc++.h>
using namespace std;

int single_Number(vector<int>&nums){
     if(nums.size() == 0){
          return 0;     
     }
     int ans=0;
     for(int i=0;i<nums.size();i++){

         ans = ans ^ nums[i]; //ekah e  amra XOR korlam      
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
