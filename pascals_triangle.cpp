#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pascal_triangle(int row){

     vector<vector<int>>triangle(row);
     for(int i=0;i<row;i++){ //row er jonno 
          triangle[i].resize(i+1);

          triangle[i][0]=1;
          triangle[i][i]=1;
          for(int j=1;j<i;j++){
               triangle[i][j]=triangle[i-1][j-1]+ triangle[i-1][j]; 
          }
     }
     return triangle;
}

int main()
{
     int row;
     cin>>row;
     vector<vector<int>>final_result= pascal_triangle(row);
     for(int i=0;i<row;i++){
          cout<<string((row-i-1)*2,' ');
       for(int j=0;j<=i;j++){
          cout<<final_result[i][j]<<"   ";
       }
       cout<<endl;   
     }     
     return 0;
}
