#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
int k=m;
vector<int>v(k,-1);
for(int i=0;i<m;i++){
    v[i]=arr1[i];
}	
int index=0;
int i=0,j=0;
while(i<k && j<n){
  if (v[i] <= arr2[j]) {
    arr1[index] =v[i];
    i++;
    index++;
  }
  else if (v[i] > arr2[j]) {
    arr1[index] =arr2[j];
    j++;
    index++;
  }
}
if(i==k){
while(j<n){
    arr1[index]=arr2[j];
    index++;
    j++;
}
}
if(j==n){
    while(i<k){
    arr1[index]=v[i];
    index++;
    i++;
    }
}
return arr1;
}