#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
//  vector<long long int>ans[n];
 vector<vector<long long int>>ans;
 for(int i=0;i<n;i++){
   vector<long long int>ans1(i+1,0);
   ans1[0]=1;
   ans1[i]=1;
   ans.push_back(ans1);
 }
 for(int i=2;i<n;i++){
   for(int j=1;j<i;j++){
     ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
   }
 }
 return ans;
}