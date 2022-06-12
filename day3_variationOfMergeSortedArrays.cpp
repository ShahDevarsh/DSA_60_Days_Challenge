#include <bits/stdc++.h>
using namespace std;

int nextGap(int n){
    if(n<=1)return 0;
    else{
        return (n%2)+(n/2);
    }
}
void mergeSortedArrays(vector<int>& nums1, int n, vector<int>& nums2, int m) {
    int i,j,gap=n+m;
    for(int gap=nextGap(gap);gap>0;gap=nextGap(gap)){
        //check in first array
        for(i=0;i+gap<n;i++){
            if(nums1[i]>nums1[i+gap]){
                swap(nums1[i],nums1[i+gap]);
            }
        }
        //check in both arrays
        for(j=gap>n?gap-n:0;i<n && j<m;i++,j++){
            if(nums1[i]>nums2[j])swap(nums1[i],nums2[j]);
        }
        //check in second array
        if(j<m){
            for(j=0;j+gap<m;j++){
                if(nums2[j]>nums2[j+gap]){
                    swap(nums2[j],nums2[j+gap]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)cout<<nums1[i]<<" ";
    for(int i=0;i<m;i++)cout<<nums2[i]<<" ";
}

int main(){
    int n,m;cin>>n>>m;
    vector<int>nums1(n),nums2(m);
    for(int i=0;i<n;i++)cin>>nums1[i];
    for(int i=0;i<m;i++)cin>>nums2[i];
    mergeSortedArrays(nums1,n,nums2,m);
}
